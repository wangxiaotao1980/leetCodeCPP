/***********************************************************************************************************************
 *  @file    LeetCode00201ToLeetCode00300.hpp  2022-06-18 00:20:28
 *  @author  Wang Xiaotao<wangxiaotao1980@gmail.com>
 **********************************************************************************************************************/

#include "LeetCode00201ToLeetCode00300.hpp"
#include "Struct.hpp"
#include <string>
#include <map>
#include <stack>
#include <sstream>
#include <unordered_map>
//----------------------------------------------------------------------------------------------------------------------
// LeetCode No.204 Count Primes
int LeetCode00204::countPrimes(int n)
{
    if (n <= 2)
    {
        return 0;
    }

    bool* primes = new bool[n];
    memset(primes, true, sizeof(bool) * n);

    for (int p = 2; (p * p) < n; ++p)
    {
        if (primes[p])
        {
            for (int i = 2; (i * p) < n; ++i)
            {
                primes[i * p] = false;
            }
        }
    }

    int count = 0;
    for (int p = 2; p < n; ++p)
    {
        if (primes[p])
        {
            ++count;
        }
    }
    delete[] primes;
    return count;
}

//----------------------------------------------------------------------------------------------------------------------
// No.205  Isomorphic Strings
bool LeetCode00205::isIsomorphic(std::string s, std::string t)
{
    char sHash[256];
    memset(sHash, 0, sizeof(sHash));

    char number = 0;

    for (std::string::iterator it = s.begin(); it != s.end(); ++it)
    {
        if (sHash[*it])
        {
            *it = sHash[*it];
        }
        else
        {
            sHash[*it] = ++number;
            *it = number;
        }
    }

    memset(sHash, 0, sizeof(sHash));
    number = 0;

    for (std::string::iterator it = t.begin(); it != t.end(); ++it)
    {
        if (sHash[*it])
        {
            *it = sHash[*it];
        }
        else
        {
            sHash[*it] = ++number;
            *it = number;
        }
    }

    return s == t;
}

// ------------------------------------------------------------------------------------------
// LeetCode No.223 Rectangle Area
int LeetCode00223::computeArea(int A, int B, int C, int D, int E, int F, int G, int H)
{
    int64_t x1Len = (C - A);
    int64_t x2Len = (G - E);

    int64_t xAllLen = x1Len + x2Len;

    int64_t y1Len = (D - B);
    int64_t y2Len = (H - F);

    int64_t yAllLen = y1Len + y2Len;

    int64_t xMin = (A < E) ? A : E;
    int64_t xMax = (C > G) ? C : G;

    int64_t xRealLen = xMax - xMin;

    int64_t yMin = (B < F) ? B : F;
    int64_t yMax = (D > H) ? D : H;

    int64_t yRealLen = yMax - yMin;

    int64_t xlen = xAllLen - xRealLen;
    xlen = (xlen < 0) ? 0 : xlen;

    int64_t ylen = yAllLen - yRealLen;
    ylen = (ylen < 0) ? 0 : ylen;

    return (x1Len * y1Len) + (x2Len * y2Len) - (xlen * ylen);
}

namespace
{
    const std::map<char, int> inStackPriority
    { { '#', 0 }, { '+', 3 }, { '-', 3 }, { '(', 1 }, { ')', 4 } };
    const std::map<char, int> outStackPriority
    { { '#', 0 }, { '+', 2 }, { '-', 2 }, { '(', 4 }, { ')', 1 } };
}

//----------------------------------------------------------------------------------------------------------------------
// No.224 Basic Calculator
int LeetCode00224::calculate(std::string s)
{
    std::stack<std::pair<char, int> > symbolStack;
    std::stack<int>    numberStack;

    s.push_back('#');

    std::string::const_iterator cit = s.cbegin();

    while (cit != s.cend())
    {
        if (' ' == *cit)
        {
            ++cit;
            continue;
        }

        if (isdigit(*cit))
        {
            int number = 0;

            while (isdigit(*cit))
            {
                number *= 10;
                number += ((*cit) - '0');
                ++cit;
            }

            numberStack.push(number);
            continue;
        }

        std::map<char, int>::const_iterator outmapit
            = outStackPriority.find(*cit);

        if (outmapit != outStackPriority.end())
        {
            int level = outmapit->second;

            if (symbolStack.empty())
            {
                symbolStack.push(std::make_pair(*cit, inStackPriority.find(*cit)->second));
            }
            else
            {
                if (level > symbolStack.top().second)
                {
                    symbolStack.push(std::make_pair(*cit, inStackPriority.find(*cit)->second));
                }
                else
                {
                    while ((!symbolStack.empty()) && (level < symbolStack.top().second))
                    {
                        char symbol = symbolStack.top().first;
                        symbolStack.pop();

                        if ('+' == symbol)
                        {
                            int b = numberStack.top();
                            numberStack.pop();
                            int a = numberStack.top();
                            numberStack.pop();
                            numberStack.push(a + b);
                        }

                        if ('-' == symbol)
                        {
                            int b = numberStack.top();
                            numberStack.pop();
                            int a = numberStack.top();
                            numberStack.pop();
                            numberStack.push(a - b);
                        }
                    }

                    if ((!symbolStack.empty()) && (level == symbolStack.top().second))
                    {
                        symbolStack.pop();
                    }
                    else
                    {
                        symbolStack.push(std::make_pair(*cit, inStackPriority.find(*cit)->second));
                    }
                }
            }
            ++cit;
            continue;
        }
    }

    return numberStack.top();
}


//----------------------------------------------------------------------------------------------------------------------
// No.227 Basic Calculator II
int LeetCode00227::calculateII(std::string s)
{
    std::stack<std::pair<char, int> > symbolStack;
    std::stack<int>    numberStack;

    s.push_back('#');

    std::string::const_iterator cit = s.cbegin();

    while (cit != s.cend())
    {
        if (' ' == *cit)
        {
            ++cit;
            continue;
        }

        if (isdigit(*cit))
        {
            int number = 0;

            while (isdigit(*cit))
            {
                number *= 10;
                number += ((*cit) - '0');
                ++cit;
            }

            numberStack.push(number);
            continue;
        }

        std::map<char, int>::const_iterator outmapit = outStackPriority.find(*cit);

        if (outmapit != outStackPriority.end())
        {
            int level = outmapit->second;

            if (symbolStack.empty())
            {
                symbolStack.push(std::make_pair(*cit, inStackPriority.find(*cit)->second));
            }
            else
            {
                if (level > symbolStack.top().second)
                {
                    symbolStack.push(std::make_pair(*cit, inStackPriority.find(*cit)->second));
                }
                else
                {
                    while ((!symbolStack.empty()) && (level < symbolStack.top().second))
                    {
                        char symbol = symbolStack.top().first;
                        symbolStack.pop();

                        if ('+' == symbol)
                        {
                            int b = numberStack.top();
                            numberStack.pop();
                            int a = numberStack.top();
                            numberStack.pop();
                            numberStack.push(a + b);
                        }

                        if ('-' == symbol)
                        {
                            int b = numberStack.top();
                            numberStack.pop();
                            int a = numberStack.top();
                            numberStack.pop();
                            numberStack.push(a - b);
                        }

                        if ('*' == symbol)
                        {
                            int b = numberStack.top();
                            numberStack.pop();
                            int a = numberStack.top();
                            numberStack.pop();
                            numberStack.push(a * b);
                        }

                        if ('/' == symbol)
                        {
                            int b = numberStack.top();
                            numberStack.pop();
                            int a = numberStack.top();
                            numberStack.pop();
                            numberStack.push(a / b);
                        }
                    }
                    symbolStack.push(std::make_pair(*cit, inStackPriority.find(*cit)->second));
                }
            }
            ++cit;
            continue;
        }
    }

    return numberStack.top();
}

//----------------------------------------------------------------------------------------------------------------------
// LeetCode No.228 Summary Ranges
std::vector<std::string> LeetCode00228::summaryRanges(std::vector<int>& nums)
{
    int begin = 0;
    int end = 0;

    std::vector<std::string> result;

    const size_t len = nums.size();
    if (0 == len)
    {
        return result;
    }

    std::stringstream ostr;

    while (end < len)
    {
        if (begin == end)
        {
            ostr << nums[end++];
        }
        else if ((end - begin) == (nums[end] - nums[begin]))
        {
            ++end;
        }
        else
        {
            if ((end - begin) == 1)
            {
                result.push_back(ostr.str());
                ostr.str("");
                begin = end;
            }
            else
            {
                ostr << "->" << nums[end - 1];
                result.push_back(ostr.str());
                ostr.str("");
                begin = end;
            }
        }
    }

    if ((end - begin) == 1)
    {
        result.push_back(ostr.str());
        ostr.str("");
        begin = end;
    }
    else
    {
        ostr << "->" << nums[end - 1];
        result.push_back(ostr.str());
        ostr.str("");
        begin = end;
    }

    return result;
}

//----------------------------------------------------------------------------------------------------------------------
// LeetCode No.234  Palindrome Linked List
bool LeetCode00234::isPalindrome(ListNode* head)
{
    ListNode realHead(0);
    realHead.next = head;
    ListNode* pSlow = &realHead;
    ListNode* pFast = &realHead;

    while ((pFast->next) && (pFast->next->next))
    {
        pSlow = pSlow->next;
        pFast = pFast->next->next;
    }

    ListNode* pend = reverseList(pSlow->next);
    ListNode* pbegin = head;
    while (pbegin && pend)
    {
        if (pbegin->val == pend->val)
        {
            pbegin = pbegin->next;
            pend = pend->next;
        }
        else
        {
            return false;
        }
    }

    return true;
}

ListNode* LeetCode00234::reverseList(ListNode* head)
{
    ListNode firstNode(0);
    ListNode* pFirstNode = &firstNode;
    pFirstNode->next = head;

    ListNode* pend = pFirstNode->next;

    ListNode* p1st = pFirstNode;
    ListNode* p2ed = pFirstNode->next;

    ListNode* pResult = 0;

    while (p2ed)
    {
        pResult = p2ed;
        ListNode* pTemp = p2ed->next;
        p2ed->next = p1st;
        p1st = p2ed;
        p2ed = pTemp;
    }

    if (pend)
    {
        pend->next = 0;
    }

    return pResult;
}

// No.236 Lowest Common Ancestor of a Binary Tree
TreeNode* LeetCode00236::lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q)
{
    if (!root)
    {
        return root;
    }

    if ((p == root) || (q == root))
    {
        return root;
    }

    TreeNode* pLeftAncestor = lowestCommonAncestor(root->left, p, q);
    TreeNode* pRightAncestor = lowestCommonAncestor(root->right, p, q);

    if (pLeftAncestor && pRightAncestor)
    {
        return root;
    }

    if (pLeftAncestor)
    {
        return pLeftAncestor;
    }

    if (pRightAncestor)
    {
        return pRightAncestor;
    }

    return 0;
}



//----------------------------------------------------------------------------------------------------------------------
//
Trie::Trie()
{
    m_root = new TrieNode();
    m_root->m_isEnd = true;
}

//----------------------------------------------------------------------------------------------------------------------
//
Trie::~Trie()
{
    deleteTrieNode(m_root);
}

//----------------------------------------------------------------------------------------------------------------------
//
void Trie::insert(std::string word)
{
    TrieNode* pcurrent = m_root;
    for (std::string::const_iterator cit = word.cbegin(); cit != word.cend(); ++cit)
    {
        if (0 == pcurrent->m_nexts[(*cit) - 'a'])
        {
            pcurrent->m_nexts[(*cit) - 'a'] = new TrieNode();
            pcurrent->m_nexts[(*cit) - 'a']->m_val = (*cit);
        }

        pcurrent = pcurrent->m_nexts[(*cit) - 'a'];
    }

    pcurrent->m_isEnd = true;
}

//----------------------------------------------------------------------------------------------------------------------
//
bool Trie::search(std::string word)
{
    TrieNode* pcurrent = m_root;
    for (std::string::const_iterator cit = word.cbegin(); cit != word.cend(); ++cit)
    {
        if (0 != pcurrent->m_nexts[(*cit) - 'a'])
        {
            pcurrent = pcurrent->m_nexts[(*cit) - 'a'];
        }
        else
        {
            return false;
        }
    }

    if (pcurrent->m_isEnd)
    {
        return true;
    }

    return false;
}

//----------------------------------------------------------------------------------------------------------------------
//
bool Trie::startsWith(std::string prefix)
{
    TrieNode* pcurrent = m_root;
    for (std::string::const_iterator cit = prefix.cbegin(); cit != prefix.cend(); ++cit)
    {
        if (0 != pcurrent->m_nexts[(*cit) - 'a'])
        {
            pcurrent = pcurrent->m_nexts[(*cit) - 'a'];
        }
        else
        {
            return false;
        }
    }
    return true;
}

//----------------------------------------------------------------------------------------------------------------------
//
void Trie::deleteTrieNode(TrieNode* pRoot)
{
    if (!pRoot)
    {
        return;
    }

    for (int i = 0; i < 26; ++i)
    {
        deleteTrieNode(pRoot->m_nexts[i]);
    }

    delete pRoot;
}

//----------------------------------------------------------------------------------------------------------------------
//
std::vector<int> LeetCode00238::productExceptSelf(std::vector<int>& nums)
{
    int len = nums.size();
    std::vector<int> result(len + 2, 1);

    for (int i = 0; i < len; ++i)
    {
        result[i + 1] = result[i] * nums[i];
    }

    for (int i = len; i != 0; --i)
    {
        result[i] = result[i - 1] * result[len + 1];
        result[len + 1] *= nums[i - 1];
    }

    return std::vector<int>(result.begin() + 1, result.end() - 1);
}

// ------------------------------------------------------------------------------------------
//
std::vector<std::string> LeetCode00257::binaryTreePaths(TreeNode* root)
{
    if (root)
    {
        pushNodeInStack(root);
    }

    return m_result;
}

// ------------------------------------------------------------------------------------------
//
void LeetCode00257::pushNodeInStack(TreeNode* pNode)
{
    m_nodeDeque.push_back(pNode);

    TreeNode*& top = m_nodeDeque.back();

    if (!(top->left) && !(top->right))
    {
        std::stringstream ostr;
        for (std::deque<TreeNode*>::const_iterator cit = m_nodeDeque.cbegin(); cit != m_nodeDeque.cend(); ++cit)
        {
            ostr << (*cit)->val << "->";
        }

        std::string tempStr = ostr.str();
        m_result.push_back(tempStr.substr(0, tempStr.size() - 2));
    }

    if (top->left)
    {
        pushNodeInStack(top->left);
    }

    if (top->right)
    {
        pushNodeInStack(top->right);
    }

    m_nodeDeque.pop_back();
}

// ------------------------------------------------------------------------------------------
 // LeetCode No.260 Single Number III
std::vector<int> LeetCode00260::singleNumberIII(std::vector<int>& nums)
{
    int xorValue = 0;

    for (std::vector<int>::const_iterator cit = nums.cbegin(); cit != nums.cend(); ++cit)
    {
        xorValue ^= *cit;
    }

    int flags = xorValue ^ (~(xorValue - 1));

    std::vector<int> resultVector{ 0, 0 };

    for (std::vector<int>::const_iterator cit = nums.cbegin(); cit != nums.cend(); ++cit)
    {
        if (flags & (*cit))
        {
            resultVector[0] ^= *cit;
        }
        else
        {
            resultVector[1] ^= *cit;
        }
    }

    return resultVector;
}

// ------------------------------------------------------------------------------------------
 //
int LeetCode00268::missingNumber(std::vector<int>& nums)
{
    const int len = nums.size();

    int sum = (len * (len + 1)) >> 1;

    int realSum = 0;
    for (int i = 0; i < len; ++i)
    {
        realSum += nums[i];
    }

    return sum - realSum;
}

// ------------------------------------------------------------------------------------------
//
LeetCode00278::LeetCode00278(const bool* pBool)
    : m_pBool(pBool)
{}

// ------------------------------------------------------------------------------------------
//
int LeetCode00278::firstBadVersion(int n)
{
    int beg = 1;
    int end = n;

    while (beg < end)
    {
        int mid = beg + (end - beg) / 2;

        if (isBadVersion(mid))
        {
            end = mid;
        }
        else
        {
            beg = mid + 1;
        }
    }

    return beg;
}

// ------------------------------------------------------------------------------------------
//
bool LeetCode00278::isBadVersion(int version)
{
    return !m_pBool[version - 1];
}

// no.284
// ------------------------------------------------------------------------------------------
 //
Iterator::Iterator(const std::vector<int>& nums)
{
}

// ------------------------------------------------------------------------------------------
//
Iterator::Iterator(const Iterator& iter)
{
}

// ------------------------------------------------------------------------------------------
//
Iterator::~Iterator()
{
}

// ------------------------------------------------------------------------------------------
//
int Iterator::next()
{
    return 0;
}

// ------------------------------------------------------------------------------------------
//
bool Iterator::hasNext() const
{
    return false;
}

// ------------------------------------------------------------------------------------------
//
LeetCode00284::LeetCode00284(const std::vector<int>& nums) :Iterator(nums)
{
    // **DO NOT** save a copy of nums and manipulate it directly.
    // You should only use the Iterator interface methods.
    next();
}

// ------------------------------------------------------------------------------------------
//
int LeetCode00284::peek()
{
    return m_nextValue;
}

// ------------------------------------------------------------------------------------------
//
int LeetCode00284::next()
{
    int result = m_nextValue;

    if (Iterator::hasNext())
    {
        m_nextValue = Iterator::next();
        m_isHasNext = true;
    }
    else
    {
        m_isHasNext = false;
    }

    return result;
}

// ------------------------------------------------------------------------------------------
//
bool LeetCode00284::hasNext() const
{
    return m_isHasNext;
}

bool LeetCode00290::wordPattern(std::string pattern, std::string str)
{
    std::string::size_type beg = 0;
    std::string::size_type end = 0;
    std::string::size_type patternBeg = 0;

    std::unordered_map<char, std::string> patternToStr;
    std::unordered_map<std::string, char> strToPattern;

    do
    {
        end = str.find_first_of(' ', beg);

        std::string substr = str.substr(beg, end - beg);

        std::unordered_map<char, std::string>::const_iterator patternToStrCit
            = patternToStr.find(pattern[patternBeg]);

        if (patternToStrCit != patternToStr.end())
        {
            if (patternToStrCit->second != substr)
            {
                return false;
            }
        }
        else
        {
            std::unordered_map<std::string, char>::const_iterator strToPatternCit
                = strToPattern.find(substr);

            if (strToPatternCit != strToPattern.end())
            {
                return false;
            }
            else
            {
                patternToStr.insert(std::make_pair(pattern[patternBeg], substr));
                strToPattern.insert(std::make_pair(substr, pattern[patternBeg]));
            }
        }

        beg = end;
        ++beg;
        ++patternBeg;
    } while ((end != std::string::npos) && (patternBeg != pattern.size()));

    if ((patternBeg != pattern.size()) || end != std::string::npos)
    {
        return false;
    }

    return true;
}

// ------------------------------------------------------------------------------------------
 //
bool LeetCode00292::canWinNim(int n)
{
    return (n % 4);
}

// ------------------------------------------------------------------------------------------
//
LeetCode00295::LeetCode00295()
{
    m_lessMedianQueue.push(INT_MIN);
    m_greaterMedianQueueQueue.push(INT_MAX);
}

void LeetCode00295::addNum(int num)
{
    int lessMedianMax = m_lessMedianQueue.top();
    int greaterMedianMin = m_greaterMedianQueueQueue.top();

    if (num <= lessMedianMax)
    {
        m_lessMedianQueue.push(num);
    }
    else if (num >= greaterMedianMin)
    {
        m_greaterMedianQueueQueue.push(num);
    }
    else
    {
        if (m_lessMedianQueue.size() > m_greaterMedianQueueQueue.size())
        {
            m_greaterMedianQueueQueue.push(num);
        }
        else
        {
            m_lessMedianQueue.push(num);
        }
    }

    if (2 == (m_lessMedianQueue.size() - m_greaterMedianQueueQueue.size()))
    {
        m_greaterMedianQueueQueue.push(m_lessMedianQueue.top());
        m_lessMedianQueue.pop();
    }

    if (2 == (m_greaterMedianQueueQueue.size() - m_lessMedianQueue.size()))
    {
        m_lessMedianQueue.push(m_greaterMedianQueueQueue.top());
        m_greaterMedianQueueQueue.pop();
    }
}

double LeetCode00295::findMedian()
{
    if (m_lessMedianQueue.size() == m_greaterMedianQueueQueue.size())
    {
        return (m_lessMedianQueue.top() + m_greaterMedianQueueQueue.top()) / 2.0;
    }

    if (m_lessMedianQueue.size() > m_greaterMedianQueueQueue.size())
    {
        double ressult = m_lessMedianQueue.top();
        return ressult;
    }
    else
    {
        double ressult = m_greaterMedianQueueQueue.top();
        return ressult;
    }
}


// ------------------------------------------------------------------------------------------
//
std::string LeetCode00299::getHint(std::string secret, std::string guess)
{
    std::size_t secretLen = secret.size();
    std::size_t guessLen = guess.size();

    std::size_t bullnumber = 0;

    std::size_t minsize = std::min(secretLen, guessLen);

    for (int i = 0; i != minsize; ++i)
    {
        char temp = secret[i] ^ guess[i];

        if (!temp)
        {
            secret[i] = 0;
            guess[i] = 0;
            ++bullnumber;
        }
    }

    std::sort(secret.begin(), secret.end());
    std::sort(guess.begin(), guess.end());

    std::string result;
    std::set_intersection(secret.begin(), secret.end(), guess.begin(), guess.end(), std::back_inserter(result));

    int size = result.size();

    std::ostringstream ostr;

    ostr << bullnumber << 'A' << (size - bullnumber) << 'B';

    return ostr.str();
}
//
//----------------------------------------------------------------------------------------------------------------------
