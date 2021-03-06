/*=============================================================================
    Copyright (c) 2001-2011 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0. (See accompanying
    file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

    This is an auto-generated file. Do not edit!
==============================================================================*/
namespace boost { namespace fusion
{
    struct void_;
    struct fusion_sequence_tag;
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10 , typename T11 , typename T12 , typename T13 , typename T14 , typename T15 , typename T16 , typename T17 , typename T18 , typename T19 , typename T20 , typename T21 , typename T22 , typename T23 , typename T24 , typename T25 , typename T26 , typename T27 , typename T28 , typename T29 , typename T30 , typename T31 , typename T32 , typename T33 , typename T34 , typename T35 , typename T36 , typename T37 , typename T38 , typename T39>
    struct vector
        : sequence_base<vector<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 , T23 , T24 , T25 , T26 , T27 , T28 , T29 , T30 , T31 , T32 , T33 , T34 , T35 , T36 , T37 , T38 , T39> >
    {
    private:
        typedef typename detail::vector_n_chooser<
            T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 , T23 , T24 , T25 , T26 , T27 , T28 , T29 , T30 , T31 , T32 , T33 , T34 , T35 , T36 , T37 , T38 , T39>::type
        vector_n;
        template <typename U0 , typename U1 , typename U2 , typename U3 , typename U4 , typename U5 , typename U6 , typename U7 , typename U8 , typename U9 , typename U10 , typename U11 , typename U12 , typename U13 , typename U14 , typename U15 , typename U16 , typename U17 , typename U18 , typename U19 , typename U20 , typename U21 , typename U22 , typename U23 , typename U24 , typename U25 , typename U26 , typename U27 , typename U28 , typename U29 , typename U30 , typename U31 , typename U32 , typename U33 , typename U34 , typename U35 , typename U36 , typename U37 , typename U38 , typename U39>
        friend struct vector;
    public:
        typedef typename vector_n::types types;
        typedef typename vector_n::fusion_tag fusion_tag;
        typedef typename vector_n::tag tag;
        typedef typename vector_n::size size;
        typedef typename vector_n::category category;
        typedef typename vector_n::is_view is_view;
        BOOST_FUSION_GPU_ENABLED
        vector()
            : vec() {}
        template <typename U0 , typename U1 , typename U2 , typename U3 , typename U4 , typename U5 , typename U6 , typename U7 , typename U8 , typename U9 , typename U10 , typename U11 , typename U12 , typename U13 , typename U14 , typename U15 , typename U16 , typename U17 , typename U18 , typename U19 , typename U20 , typename U21 , typename U22 , typename U23 , typename U24 , typename U25 , typename U26 , typename U27 , typename U28 , typename U29 , typename U30 , typename U31 , typename U32 , typename U33 , typename U34 , typename U35 , typename U36 , typename U37 , typename U38 , typename U39>
        BOOST_FUSION_GPU_ENABLED
        vector(vector<U0 , U1 , U2 , U3 , U4 , U5 , U6 , U7 , U8 , U9 , U10 , U11 , U12 , U13 , U14 , U15 , U16 , U17 , U18 , U19 , U20 , U21 , U22 , U23 , U24 , U25 , U26 , U27 , U28 , U29 , U30 , U31 , U32 , U33 , U34 , U35 , U36 , U37 , U38 , U39> const& rhs)
            : vec(rhs.vec) {}
        BOOST_FUSION_GPU_ENABLED
        vector(vector const& rhs)
            : vec(rhs.vec) {}
        template <typename Sequence>
        BOOST_FUSION_GPU_ENABLED
        vector(Sequence const& rhs)
            : vec(BOOST_FUSION_VECTOR_COPY_INIT()) {}
        
        
        
        
        
        
        
    BOOST_FUSION_GPU_ENABLED
    explicit
    vector(typename detail::call_param<T0 >::type _0)
        : vec(_0) {}
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
    template <typename U0>
    BOOST_FUSION_GPU_ENABLED
    explicit
    vector(U0 && _0)
        : vec(std::forward<U0>(_0)) {}
# endif
    BOOST_FUSION_GPU_ENABLED
    vector(typename detail::call_param<T0 >::type _0 , typename detail::call_param<T1 >::type _1)
        : vec(_0 , _1) {}
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
    template <typename U0 , typename U1>
    BOOST_FUSION_GPU_ENABLED
    vector(U0 && _0 , U1 && _1)
        : vec(std::forward<U0>(_0) , std::forward<U1>(_1)) {}
# endif
    BOOST_FUSION_GPU_ENABLED
    vector(typename detail::call_param<T0 >::type _0 , typename detail::call_param<T1 >::type _1 , typename detail::call_param<T2 >::type _2)
        : vec(_0 , _1 , _2) {}
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
    template <typename U0 , typename U1 , typename U2>
    BOOST_FUSION_GPU_ENABLED
    vector(U0 && _0 , U1 && _1 , U2 && _2)
        : vec(std::forward<U0>(_0) , std::forward<U1>(_1) , std::forward<U2>(_2)) {}
# endif
    BOOST_FUSION_GPU_ENABLED
    vector(typename detail::call_param<T0 >::type _0 , typename detail::call_param<T1 >::type _1 , typename detail::call_param<T2 >::type _2 , typename detail::call_param<T3 >::type _3)
        : vec(_0 , _1 , _2 , _3) {}
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
    template <typename U0 , typename U1 , typename U2 , typename U3>
    BOOST_FUSION_GPU_ENABLED
    vector(U0 && _0 , U1 && _1 , U2 && _2 , U3 && _3)
        : vec(std::forward<U0>(_0) , std::forward<U1>(_1) , std::forward<U2>(_2) , std::forward<U3>(_3)) {}
# endif
    BOOST_FUSION_GPU_ENABLED
    vector(typename detail::call_param<T0 >::type _0 , typename detail::call_param<T1 >::type _1 , typename detail::call_param<T2 >::type _2 , typename detail::call_param<T3 >::type _3 , typename detail::call_param<T4 >::type _4)
        : vec(_0 , _1 , _2 , _3 , _4) {}
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
    template <typename U0 , typename U1 , typename U2 , typename U3 , typename U4>
    BOOST_FUSION_GPU_ENABLED
    vector(U0 && _0 , U1 && _1 , U2 && _2 , U3 && _3 , U4 && _4)
        : vec(std::forward<U0>(_0) , std::forward<U1>(_1) , std::forward<U2>(_2) , std::forward<U3>(_3) , std::forward<U4>(_4)) {}
# endif
    BOOST_FUSION_GPU_ENABLED
    vector(typename detail::call_param<T0 >::type _0 , typename detail::call_param<T1 >::type _1 , typename detail::call_param<T2 >::type _2 , typename detail::call_param<T3 >::type _3 , typename detail::call_param<T4 >::type _4 , typename detail::call_param<T5 >::type _5)
        : vec(_0 , _1 , _2 , _3 , _4 , _5) {}
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
    template <typename U0 , typename U1 , typename U2 , typename U3 , typename U4 , typename U5>
    BOOST_FUSION_GPU_ENABLED
    vector(U0 && _0 , U1 && _1 , U2 && _2 , U3 && _3 , U4 && _4 , U5 && _5)
        : vec(std::forward<U0>(_0) , std::forward<U1>(_1) , std::forward<U2>(_2) , std::forward<U3>(_3) , std::forward<U4>(_4) , std::forward<U5>(_5)) {}
# endif
    BOOST_FUSION_GPU_ENABLED
    vector(typename detail::call_param<T0 >::type _0 , typename detail::call_param<T1 >::type _1 , typename detail::call_param<T2 >::type _2 , typename detail::call_param<T3 >::type _3 , typename detail::call_param<T4 >::type _4 , typename detail::call_param<T5 >::type _5 , typename detail::call_param<T6 >::type _6)
        : vec(_0 , _1 , _2 , _3 , _4 , _5 , _6) {}
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
    template <typename U0 , typename U1 , typename U2 , typename U3 , typename U4 , typename U5 , typename U6>
    BOOST_FUSION_GPU_ENABLED
    vector(U0 && _0 , U1 && _1 , U2 && _2 , U3 && _3 , U4 && _4 , U5 && _5 , U6 && _6)
        : vec(std::forward<U0>(_0) , std::forward<U1>(_1) , std::forward<U2>(_2) , std::forward<U3>(_3) , std::forward<U4>(_4) , std::forward<U5>(_5) , std::forward<U6>(_6)) {}
# endif
    BOOST_FUSION_GPU_ENABLED
    vector(typename detail::call_param<T0 >::type _0 , typename detail::call_param<T1 >::type _1 , typename detail::call_param<T2 >::type _2 , typename detail::call_param<T3 >::type _3 , typename detail::call_param<T4 >::type _4 , typename detail::call_param<T5 >::type _5 , typename detail::call_param<T6 >::type _6 , typename detail::call_param<T7 >::type _7)
        : vec(_0 , _1 , _2 , _3 , _4 , _5 , _6 , _7) {}
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
    template <typename U0 , typename U1 , typename U2 , typename U3 , typename U4 , typename U5 , typename U6 , typename U7>
    BOOST_FUSION_GPU_ENABLED
    vector(U0 && _0 , U1 && _1 , U2 && _2 , U3 && _3 , U4 && _4 , U5 && _5 , U6 && _6 , U7 && _7)
        : vec(std::forward<U0>(_0) , std::forward<U1>(_1) , std::forward<U2>(_2) , std::forward<U3>(_3) , std::forward<U4>(_4) , std::forward<U5>(_5) , std::forward<U6>(_6) , std::forward<U7>(_7)) {}
# endif
    BOOST_FUSION_GPU_ENABLED
    vector(typename detail::call_param<T0 >::type _0 , typename detail::call_param<T1 >::type _1 , typename detail::call_param<T2 >::type _2 , typename detail::call_param<T3 >::type _3 , typename detail::call_param<T4 >::type _4 , typename detail::call_param<T5 >::type _5 , typename detail::call_param<T6 >::type _6 , typename detail::call_param<T7 >::type _7 , typename detail::call_param<T8 >::type _8)
        : vec(_0 , _1 , _2 , _3 , _4 , _5 , _6 , _7 , _8) {}
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
    template <typename U0 , typename U1 , typename U2 , typename U3 , typename U4 , typename U5 , typename U6 , typename U7 , typename U8>
    BOOST_FUSION_GPU_ENABLED
    vector(U0 && _0 , U1 && _1 , U2 && _2 , U3 && _3 , U4 && _4 , U5 && _5 , U6 && _6 , U7 && _7 , U8 && _8)
        : vec(std::forward<U0>(_0) , std::forward<U1>(_1) , std::forward<U2>(_2) , std::forward<U3>(_3) , std::forward<U4>(_4) , std::forward<U5>(_5) , std::forward<U6>(_6) , std::forward<U7>(_7) , std::forward<U8>(_8)) {}
# endif
    BOOST_FUSION_GPU_ENABLED
    vector(typename detail::call_param<T0 >::type _0 , typename detail::call_param<T1 >::type _1 , typename detail::call_param<T2 >::type _2 , typename detail::call_param<T3 >::type _3 , typename detail::call_param<T4 >::type _4 , typename detail::call_param<T5 >::type _5 , typename detail::call_param<T6 >::type _6 , typename detail::call_param<T7 >::type _7 , typename detail::call_param<T8 >::type _8 , typename detail::call_param<T9 >::type _9)
        : vec(_0 , _1 , _2 , _3 , _4 , _5 , _6 , _7 , _8 , _9) {}
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
    template <typename U0 , typename U1 , typename U2 , typename U3 , typename U4 , typename U5 , typename U6 , typename U7 , typename U8 , typename U9>
    BOOST_FUSION_GPU_ENABLED
    vector(U0 && _0 , U1 && _1 , U2 && _2 , U3 && _3 , U4 && _4 , U5 && _5 , U6 && _6 , U7 && _7 , U8 && _8 , U9 && _9)
        : vec(std::forward<U0>(_0) , std::forward<U1>(_1) , std::forward<U2>(_2) , std::forward<U3>(_3) , std::forward<U4>(_4) , std::forward<U5>(_5) , std::forward<U6>(_6) , std::forward<U7>(_7) , std::forward<U8>(_8) , std::forward<U9>(_9)) {}
# endif
    BOOST_FUSION_GPU_ENABLED
    vector(typename detail::call_param<T0 >::type _0 , typename detail::call_param<T1 >::type _1 , typename detail::call_param<T2 >::type _2 , typename detail::call_param<T3 >::type _3 , typename detail::call_param<T4 >::type _4 , typename detail::call_param<T5 >::type _5 , typename detail::call_param<T6 >::type _6 , typename detail::call_param<T7 >::type _7 , typename detail::call_param<T8 >::type _8 , typename detail::call_param<T9 >::type _9 , typename detail::call_param<T10 >::type _10)
        : vec(_0 , _1 , _2 , _3 , _4 , _5 , _6 , _7 , _8 , _9 , _10) {}
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
    template <typename U0 , typename U1 , typename U2 , typename U3 , typename U4 , typename U5 , typename U6 , typename U7 , typename U8 , typename U9 , typename U10>
    BOOST_FUSION_GPU_ENABLED
    vector(U0 && _0 , U1 && _1 , U2 && _2 , U3 && _3 , U4 && _4 , U5 && _5 , U6 && _6 , U7 && _7 , U8 && _8 , U9 && _9 , U10 && _10)
        : vec(std::forward<U0>(_0) , std::forward<U1>(_1) , std::forward<U2>(_2) , std::forward<U3>(_3) , std::forward<U4>(_4) , std::forward<U5>(_5) , std::forward<U6>(_6) , std::forward<U7>(_7) , std::forward<U8>(_8) , std::forward<U9>(_9) , std::forward<U10>(_10)) {}
# endif
    BOOST_FUSION_GPU_ENABLED
    vector(typename detail::call_param<T0 >::type _0 , typename detail::call_param<T1 >::type _1 , typename detail::call_param<T2 >::type _2 , typename detail::call_param<T3 >::type _3 , typename detail::call_param<T4 >::type _4 , typename detail::call_param<T5 >::type _5 , typename detail::call_param<T6 >::type _6 , typename detail::call_param<T7 >::type _7 , typename detail::call_param<T8 >::type _8 , typename detail::call_param<T9 >::type _9 , typename detail::call_param<T10 >::type _10 , typename detail::call_param<T11 >::type _11)
        : vec(_0 , _1 , _2 , _3 , _4 , _5 , _6 , _7 , _8 , _9 , _10 , _11) {}
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
    template <typename U0 , typename U1 , typename U2 , typename U3 , typename U4 , typename U5 , typename U6 , typename U7 , typename U8 , typename U9 , typename U10 , typename U11>
    BOOST_FUSION_GPU_ENABLED
    vector(U0 && _0 , U1 && _1 , U2 && _2 , U3 && _3 , U4 && _4 , U5 && _5 , U6 && _6 , U7 && _7 , U8 && _8 , U9 && _9 , U10 && _10 , U11 && _11)
        : vec(std::forward<U0>(_0) , std::forward<U1>(_1) , std::forward<U2>(_2) , std::forward<U3>(_3) , std::forward<U4>(_4) , std::forward<U5>(_5) , std::forward<U6>(_6) , std::forward<U7>(_7) , std::forward<U8>(_8) , std::forward<U9>(_9) , std::forward<U10>(_10) , std::forward<U11>(_11)) {}
# endif
    BOOST_FUSION_GPU_ENABLED
    vector(typename detail::call_param<T0 >::type _0 , typename detail::call_param<T1 >::type _1 , typename detail::call_param<T2 >::type _2 , typename detail::call_param<T3 >::type _3 , typename detail::call_param<T4 >::type _4 , typename detail::call_param<T5 >::type _5 , typename detail::call_param<T6 >::type _6 , typename detail::call_param<T7 >::type _7 , typename detail::call_param<T8 >::type _8 , typename detail::call_param<T9 >::type _9 , typename detail::call_param<T10 >::type _10 , typename detail::call_param<T11 >::type _11 , typename detail::call_param<T12 >::type _12)
        : vec(_0 , _1 , _2 , _3 , _4 , _5 , _6 , _7 , _8 , _9 , _10 , _11 , _12) {}
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
    template <typename U0 , typename U1 , typename U2 , typename U3 , typename U4 , typename U5 , typename U6 , typename U7 , typename U8 , typename U9 , typename U10 , typename U11 , typename U12>
    BOOST_FUSION_GPU_ENABLED
    vector(U0 && _0 , U1 && _1 , U2 && _2 , U3 && _3 , U4 && _4 , U5 && _5 , U6 && _6 , U7 && _7 , U8 && _8 , U9 && _9 , U10 && _10 , U11 && _11 , U12 && _12)
        : vec(std::forward<U0>(_0) , std::forward<U1>(_1) , std::forward<U2>(_2) , std::forward<U3>(_3) , std::forward<U4>(_4) , std::forward<U5>(_5) , std::forward<U6>(_6) , std::forward<U7>(_7) , std::forward<U8>(_8) , std::forward<U9>(_9) , std::forward<U10>(_10) , std::forward<U11>(_11) , std::forward<U12>(_12)) {}
# endif
    BOOST_FUSION_GPU_ENABLED
    vector(typename detail::call_param<T0 >::type _0 , typename detail::call_param<T1 >::type _1 , typename detail::call_param<T2 >::type _2 , typename detail::call_param<T3 >::type _3 , typename detail::call_param<T4 >::type _4 , typename detail::call_param<T5 >::type _5 , typename detail::call_param<T6 >::type _6 , typename detail::call_param<T7 >::type _7 , typename detail::call_param<T8 >::type _8 , typename detail::call_param<T9 >::type _9 , typename detail::call_param<T10 >::type _10 , typename detail::call_param<T11 >::type _11 , typename detail::call_param<T12 >::type _12 , typename detail::call_param<T13 >::type _13)
        : vec(_0 , _1 , _2 , _3 , _4 , _5 , _6 , _7 , _8 , _9 , _10 , _11 , _12 , _13) {}
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
    template <typename U0 , typename U1 , typename U2 , typename U3 , typename U4 , typename U5 , typename U6 , typename U7 , typename U8 , typename U9 , typename U10 , typename U11 , typename U12 , typename U13>
    BOOST_FUSION_GPU_ENABLED
    vector(U0 && _0 , U1 && _1 , U2 && _2 , U3 && _3 , U4 && _4 , U5 && _5 , U6 && _6 , U7 && _7 , U8 && _8 , U9 && _9 , U10 && _10 , U11 && _11 , U12 && _12 , U13 && _13)
        : vec(std::forward<U0>(_0) , std::forward<U1>(_1) , std::forward<U2>(_2) , std::forward<U3>(_3) , std::forward<U4>(_4) , std::forward<U5>(_5) , std::forward<U6>(_6) , std::forward<U7>(_7) , std::forward<U8>(_8) , std::forward<U9>(_9) , std::forward<U10>(_10) , std::forward<U11>(_11) , std::forward<U12>(_12) , std::forward<U13>(_13)) {}
# endif
    BOOST_FUSION_GPU_ENABLED
    vector(typename detail::call_param<T0 >::type _0 , typename detail::call_param<T1 >::type _1 , typename detail::call_param<T2 >::type _2 , typename detail::call_param<T3 >::type _3 , typename detail::call_param<T4 >::type _4 , typename detail::call_param<T5 >::type _5 , typename detail::call_param<T6 >::type _6 , typename detail::call_param<T7 >::type _7 , typename detail::call_param<T8 >::type _8 , typename detail::call_param<T9 >::type _9 , typename detail::call_param<T10 >::type _10 , typename detail::call_param<T11 >::type _11 , typename detail::call_param<T12 >::type _12 , typename detail::call_param<T13 >::type _13 , typename detail::call_param<T14 >::type _14)
        : vec(_0 , _1 , _2 , _3 , _4 , _5 , _6 , _7 , _8 , _9 , _10 , _11 , _12 , _13 , _14) {}
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
    template <typename U0 , typename U1 , typename U2 , typename U3 , typename U4 , typename U5 , typename U6 , typename U7 , typename U8 , typename U9 , typename U10 , typename U11 , typename U12 , typename U13 , typename U14>
    BOOST_FUSION_GPU_ENABLED
    vector(U0 && _0 , U1 && _1 , U2 && _2 , U3 && _3 , U4 && _4 , U5 && _5 , U6 && _6 , U7 && _7 , U8 && _8 , U9 && _9 , U10 && _10 , U11 && _11 , U12 && _12 , U13 && _13 , U14 && _14)
        : vec(std::forward<U0>(_0) , std::forward<U1>(_1) , std::forward<U2>(_2) , std::forward<U3>(_3) , std::forward<U4>(_4) , std::forward<U5>(_5) , std::forward<U6>(_6) , std::forward<U7>(_7) , std::forward<U8>(_8) , std::forward<U9>(_9) , std::forward<U10>(_10) , std::forward<U11>(_11) , std::forward<U12>(_12) , std::forward<U13>(_13) , std::forward<U14>(_14)) {}
# endif
    BOOST_FUSION_GPU_ENABLED
    vector(typename detail::call_param<T0 >::type _0 , typename detail::call_param<T1 >::type _1 , typename detail::call_param<T2 >::type _2 , typename detail::call_param<T3 >::type _3 , typename detail::call_param<T4 >::type _4 , typename detail::call_param<T5 >::type _5 , typename detail::call_param<T6 >::type _6 , typename detail::call_param<T7 >::type _7 , typename detail::call_param<T8 >::type _8 , typename detail::call_param<T9 >::type _9 , typename detail::call_param<T10 >::type _10 , typename detail::call_param<T11 >::type _11 , typename detail::call_param<T12 >::type _12 , typename detail::call_param<T13 >::type _13 , typename detail::call_param<T14 >::type _14 , typename detail::call_param<T15 >::type _15)
        : vec(_0 , _1 , _2 , _3 , _4 , _5 , _6 , _7 , _8 , _9 , _10 , _11 , _12 , _13 , _14 , _15) {}
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
    template <typename U0 , typename U1 , typename U2 , typename U3 , typename U4 , typename U5 , typename U6 , typename U7 , typename U8 , typename U9 , typename U10 , typename U11 , typename U12 , typename U13 , typename U14 , typename U15>
    BOOST_FUSION_GPU_ENABLED
    vector(U0 && _0 , U1 && _1 , U2 && _2 , U3 && _3 , U4 && _4 , U5 && _5 , U6 && _6 , U7 && _7 , U8 && _8 , U9 && _9 , U10 && _10 , U11 && _11 , U12 && _12 , U13 && _13 , U14 && _14 , U15 && _15)
        : vec(std::forward<U0>(_0) , std::forward<U1>(_1) , std::forward<U2>(_2) , std::forward<U3>(_3) , std::forward<U4>(_4) , std::forward<U5>(_5) , std::forward<U6>(_6) , std::forward<U7>(_7) , std::forward<U8>(_8) , std::forward<U9>(_9) , std::forward<U10>(_10) , std::forward<U11>(_11) , std::forward<U12>(_12) , std::forward<U13>(_13) , std::forward<U14>(_14) , std::forward<U15>(_15)) {}
# endif
    BOOST_FUSION_GPU_ENABLED
    vector(typename detail::call_param<T0 >::type _0 , typename detail::call_param<T1 >::type _1 , typename detail::call_param<T2 >::type _2 , typename detail::call_param<T3 >::type _3 , typename detail::call_param<T4 >::type _4 , typename detail::call_param<T5 >::type _5 , typename detail::call_param<T6 >::type _6 , typename detail::call_param<T7 >::type _7 , typename detail::call_param<T8 >::type _8 , typename detail::call_param<T9 >::type _9 , typename detail::call_param<T10 >::type _10 , typename detail::call_param<T11 >::type _11 , typename detail::call_param<T12 >::type _12 , typename detail::call_param<T13 >::type _13 , typename detail::call_param<T14 >::type _14 , typename detail::call_param<T15 >::type _15 , typename detail::call_param<T16 >::type _16)
        : vec(_0 , _1 , _2 , _3 , _4 , _5 , _6 , _7 , _8 , _9 , _10 , _11 , _12 , _13 , _14 , _15 , _16) {}
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
    template <typename U0 , typename U1 , typename U2 , typename U3 , typename U4 , typename U5 , typename U6 , typename U7 , typename U8 , typename U9 , typename U10 , typename U11 , typename U12 , typename U13 , typename U14 , typename U15 , typename U16>
    BOOST_FUSION_GPU_ENABLED
    vector(U0 && _0 , U1 && _1 , U2 && _2 , U3 && _3 , U4 && _4 , U5 && _5 , U6 && _6 , U7 && _7 , U8 && _8 , U9 && _9 , U10 && _10 , U11 && _11 , U12 && _12 , U13 && _13 , U14 && _14 , U15 && _15 , U16 && _16)
        : vec(std::forward<U0>(_0) , std::forward<U1>(_1) , std::forward<U2>(_2) , std::forward<U3>(_3) , std::forward<U4>(_4) , std::forward<U5>(_5) , std::forward<U6>(_6) , std::forward<U7>(_7) , std::forward<U8>(_8) , std::forward<U9>(_9) , std::forward<U10>(_10) , std::forward<U11>(_11) , std::forward<U12>(_12) , std::forward<U13>(_13) , std::forward<U14>(_14) , std::forward<U15>(_15) , std::forward<U16>(_16)) {}
# endif
    BOOST_FUSION_GPU_ENABLED
    vector(typename detail::call_param<T0 >::type _0 , typename detail::call_param<T1 >::type _1 , typename detail::call_param<T2 >::type _2 , typename detail::call_param<T3 >::type _3 , typename detail::call_param<T4 >::type _4 , typename detail::call_param<T5 >::type _5 , typename detail::call_param<T6 >::type _6 , typename detail::call_param<T7 >::type _7 , typename detail::call_param<T8 >::type _8 , typename detail::call_param<T9 >::type _9 , typename detail::call_param<T10 >::type _10 , typename detail::call_param<T11 >::type _11 , typename detail::call_param<T12 >::type _12 , typename detail::call_param<T13 >::type _13 , typename detail::call_param<T14 >::type _14 , typename detail::call_param<T15 >::type _15 , typename detail::call_param<T16 >::type _16 , typename detail::call_param<T17 >::type _17)
        : vec(_0 , _1 , _2 , _3 , _4 , _5 , _6 , _7 , _8 , _9 , _10 , _11 , _12 , _13 , _14 , _15 , _16 , _17) {}
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
    template <typename U0 , typename U1 , typename U2 , typename U3 , typename U4 , typename U5 , typename U6 , typename U7 , typename U8 , typename U9 , typename U10 , typename U11 , typename U12 , typename U13 , typename U14 , typename U15 , typename U16 , typename U17>
    BOOST_FUSION_GPU_ENABLED
    vector(U0 && _0 , U1 && _1 , U2 && _2 , U3 && _3 , U4 && _4 , U5 && _5 , U6 && _6 , U7 && _7 , U8 && _8 , U9 && _9 , U10 && _10 , U11 && _11 , U12 && _12 , U13 && _13 , U14 && _14 , U15 && _15 , U16 && _16 , U17 && _17)
        : vec(std::forward<U0>(_0) , std::forward<U1>(_1) , std::forward<U2>(_2) , std::forward<U3>(_3) , std::forward<U4>(_4) , std::forward<U5>(_5) , std::forward<U6>(_6) , std::forward<U7>(_7) , std::forward<U8>(_8) , std::forward<U9>(_9) , std::forward<U10>(_10) , std::forward<U11>(_11) , std::forward<U12>(_12) , std::forward<U13>(_13) , std::forward<U14>(_14) , std::forward<U15>(_15) , std::forward<U16>(_16) , std::forward<U17>(_17)) {}
# endif
    BOOST_FUSION_GPU_ENABLED
    vector(typename detail::call_param<T0 >::type _0 , typename detail::call_param<T1 >::type _1 , typename detail::call_param<T2 >::type _2 , typename detail::call_param<T3 >::type _3 , typename detail::call_param<T4 >::type _4 , typename detail::call_param<T5 >::type _5 , typename detail::call_param<T6 >::type _6 , typename detail::call_param<T7 >::type _7 , typename detail::call_param<T8 >::type _8 , typename detail::call_param<T9 >::type _9 , typename detail::call_param<T10 >::type _10 , typename detail::call_param<T11 >::type _11 , typename detail::call_param<T12 >::type _12 , typename detail::call_param<T13 >::type _13 , typename detail::call_param<T14 >::type _14 , typename detail::call_param<T15 >::type _15 , typename detail::call_param<T16 >::type _16 , typename detail::call_param<T17 >::type _17 , typename detail::call_param<T18 >::type _18)
        : vec(_0 , _1 , _2 , _3 , _4 , _5 , _6 , _7 , _8 , _9 , _10 , _11 , _12 , _13 , _14 , _15 , _16 , _17 , _18) {}
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
    template <typename U0 , typename U1 , typename U2 , typename U3 , typename U4 , typename U5 , typename U6 , typename U7 , typename U8 , typename U9 , typename U10 , typename U11 , typename U12 , typename U13 , typename U14 , typename U15 , typename U16 , typename U17 , typename U18>
    BOOST_FUSION_GPU_ENABLED
    vector(U0 && _0 , U1 && _1 , U2 && _2 , U3 && _3 , U4 && _4 , U5 && _5 , U6 && _6 , U7 && _7 , U8 && _8 , U9 && _9 , U10 && _10 , U11 && _11 , U12 && _12 , U13 && _13 , U14 && _14 , U15 && _15 , U16 && _16 , U17 && _17 , U18 && _18)
        : vec(std::forward<U0>(_0) , std::forward<U1>(_1) , std::forward<U2>(_2) , std::forward<U3>(_3) , std::forward<U4>(_4) , std::forward<U5>(_5) , std::forward<U6>(_6) , std::forward<U7>(_7) , std::forward<U8>(_8) , std::forward<U9>(_9) , std::forward<U10>(_10) , std::forward<U11>(_11) , std::forward<U12>(_12) , std::forward<U13>(_13) , std::forward<U14>(_14) , std::forward<U15>(_15) , std::forward<U16>(_16) , std::forward<U17>(_17) , std::forward<U18>(_18)) {}
# endif
    BOOST_FUSION_GPU_ENABLED
    vector(typename detail::call_param<T0 >::type _0 , typename detail::call_param<T1 >::type _1 , typename detail::call_param<T2 >::type _2 , typename detail::call_param<T3 >::type _3 , typename detail::call_param<T4 >::type _4 , typename detail::call_param<T5 >::type _5 , typename detail::call_param<T6 >::type _6 , typename detail::call_param<T7 >::type _7 , typename detail::call_param<T8 >::type _8 , typename detail::call_param<T9 >::type _9 , typename detail::call_param<T10 >::type _10 , typename detail::call_param<T11 >::type _11 , typename detail::call_param<T12 >::type _12 , typename detail::call_param<T13 >::type _13 , typename detail::call_param<T14 >::type _14 , typename detail::call_param<T15 >::type _15 , typename detail::call_param<T16 >::type _16 , typename detail::call_param<T17 >::type _17 , typename detail::call_param<T18 >::type _18 , typename detail::call_param<T19 >::type _19)
        : vec(_0 , _1 , _2 , _3 , _4 , _5 , _6 , _7 , _8 , _9 , _10 , _11 , _12 , _13 , _14 , _15 , _16 , _17 , _18 , _19) {}
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
    template <typename U0 , typename U1 , typename U2 , typename U3 , typename U4 , typename U5 , typename U6 , typename U7 , typename U8 , typename U9 , typename U10 , typename U11 , typename U12 , typename U13 , typename U14 , typename U15 , typename U16 , typename U17 , typename U18 , typename U19>
    BOOST_FUSION_GPU_ENABLED
    vector(U0 && _0 , U1 && _1 , U2 && _2 , U3 && _3 , U4 && _4 , U5 && _5 , U6 && _6 , U7 && _7 , U8 && _8 , U9 && _9 , U10 && _10 , U11 && _11 , U12 && _12 , U13 && _13 , U14 && _14 , U15 && _15 , U16 && _16 , U17 && _17 , U18 && _18 , U19 && _19)
        : vec(std::forward<U0>(_0) , std::forward<U1>(_1) , std::forward<U2>(_2) , std::forward<U3>(_3) , std::forward<U4>(_4) , std::forward<U5>(_5) , std::forward<U6>(_6) , std::forward<U7>(_7) , std::forward<U8>(_8) , std::forward<U9>(_9) , std::forward<U10>(_10) , std::forward<U11>(_11) , std::forward<U12>(_12) , std::forward<U13>(_13) , std::forward<U14>(_14) , std::forward<U15>(_15) , std::forward<U16>(_16) , std::forward<U17>(_17) , std::forward<U18>(_18) , std::forward<U19>(_19)) {}
# endif
    BOOST_FUSION_GPU_ENABLED
    vector(typename detail::call_param<T0 >::type _0 , typename detail::call_param<T1 >::type _1 , typename detail::call_param<T2 >::type _2 , typename detail::call_param<T3 >::type _3 , typename detail::call_param<T4 >::type _4 , typename detail::call_param<T5 >::type _5 , typename detail::call_param<T6 >::type _6 , typename detail::call_param<T7 >::type _7 , typename detail::call_param<T8 >::type _8 , typename detail::call_param<T9 >::type _9 , typename detail::call_param<T10 >::type _10 , typename detail::call_param<T11 >::type _11 , typename detail::call_param<T12 >::type _12 , typename detail::call_param<T13 >::type _13 , typename detail::call_param<T14 >::type _14 , typename detail::call_param<T15 >::type _15 , typename detail::call_param<T16 >::type _16 , typename detail::call_param<T17 >::type _17 , typename detail::call_param<T18 >::type _18 , typename detail::call_param<T19 >::type _19 , typename detail::call_param<T20 >::type _20)
        : vec(_0 , _1 , _2 , _3 , _4 , _5 , _6 , _7 , _8 , _9 , _10 , _11 , _12 , _13 , _14 , _15 , _16 , _17 , _18 , _19 , _20) {}
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
    template <typename U0 , typename U1 , typename U2 , typename U3 , typename U4 , typename U5 , typename U6 , typename U7 , typename U8 , typename U9 , typename U10 , typename U11 , typename U12 , typename U13 , typename U14 , typename U15 , typename U16 , typename U17 , typename U18 , typename U19 , typename U20>
    BOOST_FUSION_GPU_ENABLED
    vector(U0 && _0 , U1 && _1 , U2 && _2 , U3 && _3 , U4 && _4 , U5 && _5 , U6 && _6 , U7 && _7 , U8 && _8 , U9 && _9 , U10 && _10 , U11 && _11 , U12 && _12 , U13 && _13 , U14 && _14 , U15 && _15 , U16 && _16 , U17 && _17 , U18 && _18 , U19 && _19 , U20 && _20)
        : vec(std::forward<U0>(_0) , std::forward<U1>(_1) , std::forward<U2>(_2) , std::forward<U3>(_3) , std::forward<U4>(_4) , std::forward<U5>(_5) , std::forward<U6>(_6) , std::forward<U7>(_7) , std::forward<U8>(_8) , std::forward<U9>(_9) , std::forward<U10>(_10) , std::forward<U11>(_11) , std::forward<U12>(_12) , std::forward<U13>(_13) , std::forward<U14>(_14) , std::forward<U15>(_15) , std::forward<U16>(_16) , std::forward<U17>(_17) , std::forward<U18>(_18) , std::forward<U19>(_19) , std::forward<U20>(_20)) {}
# endif
    BOOST_FUSION_GPU_ENABLED
    vector(typename detail::call_param<T0 >::type _0 , typename detail::call_param<T1 >::type _1 , typename detail::call_param<T2 >::type _2 , typename detail::call_param<T3 >::type _3 , typename detail::call_param<T4 >::type _4 , typename detail::call_param<T5 >::type _5 , typename detail::call_param<T6 >::type _6 , typename detail::call_param<T7 >::type _7 , typename detail::call_param<T8 >::type _8 , typename detail::call_param<T9 >::type _9 , typename detail::call_param<T10 >::type _10 , typename detail::call_param<T11 >::type _11 , typename detail::call_param<T12 >::type _12 , typename detail::call_param<T13 >::type _13 , typename detail::call_param<T14 >::type _14 , typename detail::call_param<T15 >::type _15 , typename detail::call_param<T16 >::type _16 , typename detail::call_param<T17 >::type _17 , typename detail::call_param<T18 >::type _18 , typename detail::call_param<T19 >::type _19 , typename detail::call_param<T20 >::type _20 , typename detail::call_param<T21 >::type _21)
        : vec(_0 , _1 , _2 , _3 , _4 , _5 , _6 , _7 , _8 , _9 , _10 , _11 , _12 , _13 , _14 , _15 , _16 , _17 , _18 , _19 , _20 , _21) {}
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
    template <typename U0 , typename U1 , typename U2 , typename U3 , typename U4 , typename U5 , typename U6 , typename U7 , typename U8 , typename U9 , typename U10 , typename U11 , typename U12 , typename U13 , typename U14 , typename U15 , typename U16 , typename U17 , typename U18 , typename U19 , typename U20 , typename U21>
    BOOST_FUSION_GPU_ENABLED
    vector(U0 && _0 , U1 && _1 , U2 && _2 , U3 && _3 , U4 && _4 , U5 && _5 , U6 && _6 , U7 && _7 , U8 && _8 , U9 && _9 , U10 && _10 , U11 && _11 , U12 && _12 , U13 && _13 , U14 && _14 , U15 && _15 , U16 && _16 , U17 && _17 , U18 && _18 , U19 && _19 , U20 && _20 , U21 && _21)
        : vec(std::forward<U0>(_0) , std::forward<U1>(_1) , std::forward<U2>(_2) , std::forward<U3>(_3) , std::forward<U4>(_4) , std::forward<U5>(_5) , std::forward<U6>(_6) , std::forward<U7>(_7) , std::forward<U8>(_8) , std::forward<U9>(_9) , std::forward<U10>(_10) , std::forward<U11>(_11) , std::forward<U12>(_12) , std::forward<U13>(_13) , std::forward<U14>(_14) , std::forward<U15>(_15) , std::forward<U16>(_16) , std::forward<U17>(_17) , std::forward<U18>(_18) , std::forward<U19>(_19) , std::forward<U20>(_20) , std::forward<U21>(_21)) {}
# endif
    BOOST_FUSION_GPU_ENABLED
    vector(typename detail::call_param<T0 >::type _0 , typename detail::call_param<T1 >::type _1 , typename detail::call_param<T2 >::type _2 , typename detail::call_param<T3 >::type _3 , typename detail::call_param<T4 >::type _4 , typename detail::call_param<T5 >::type _5 , typename detail::call_param<T6 >::type _6 , typename detail::call_param<T7 >::type _7 , typename detail::call_param<T8 >::type _8 , typename detail::call_param<T9 >::type _9 , typename detail::call_param<T10 >::type _10 , typename detail::call_param<T11 >::type _11 , typename detail::call_param<T12 >::type _12 , typename detail::call_param<T13 >::type _13 , typename detail::call_param<T14 >::type _14 , typename detail::call_param<T15 >::type _15 , typename detail::call_param<T16 >::type _16 , typename detail::call_param<T17 >::type _17 , typename detail::call_param<T18 >::type _18 , typename detail::call_param<T19 >::type _19 , typename detail::call_param<T20 >::type _20 , typename detail::call_param<T21 >::type _21 , typename detail::call_param<T22 >::type _22)
        : vec(_0 , _1 , _2 , _3 , _4 , _5 , _6 , _7 , _8 , _9 , _10 , _11 , _12 , _13 , _14 , _15 , _16 , _17 , _18 , _19 , _20 , _21 , _22) {}
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
    template <typename U0 , typename U1 , typename U2 , typename U3 , typename U4 , typename U5 , typename U6 , typename U7 , typename U8 , typename U9 , typename U10 , typename U11 , typename U12 , typename U13 , typename U14 , typename U15 , typename U16 , typename U17 , typename U18 , typename U19 , typename U20 , typename U21 , typename U22>
    BOOST_FUSION_GPU_ENABLED
    vector(U0 && _0 , U1 && _1 , U2 && _2 , U3 && _3 , U4 && _4 , U5 && _5 , U6 && _6 , U7 && _7 , U8 && _8 , U9 && _9 , U10 && _10 , U11 && _11 , U12 && _12 , U13 && _13 , U14 && _14 , U15 && _15 , U16 && _16 , U17 && _17 , U18 && _18 , U19 && _19 , U20 && _20 , U21 && _21 , U22 && _22)
        : vec(std::forward<U0>(_0) , std::forward<U1>(_1) , std::forward<U2>(_2) , std::forward<U3>(_3) , std::forward<U4>(_4) , std::forward<U5>(_5) , std::forward<U6>(_6) , std::forward<U7>(_7) , std::forward<U8>(_8) , std::forward<U9>(_9) , std::forward<U10>(_10) , std::forward<U11>(_11) , std::forward<U12>(_12) , std::forward<U13>(_13) , std::forward<U14>(_14) , std::forward<U15>(_15) , std::forward<U16>(_16) , std::forward<U17>(_17) , std::forward<U18>(_18) , std::forward<U19>(_19) , std::forward<U20>(_20) , std::forward<U21>(_21) , std::forward<U22>(_22)) {}
# endif
    BOOST_FUSION_GPU_ENABLED
    vector(typename detail::call_param<T0 >::type _0 , typename detail::call_param<T1 >::type _1 , typename detail::call_param<T2 >::type _2 , typename detail::call_param<T3 >::type _3 , typename detail::call_param<T4 >::type _4 , typename detail::call_param<T5 >::type _5 , typename detail::call_param<T6 >::type _6 , typename detail::call_param<T7 >::type _7 , typename detail::call_param<T8 >::type _8 , typename detail::call_param<T9 >::type _9 , typename detail::call_param<T10 >::type _10 , typename detail::call_param<T11 >::type _11 , typename detail::call_param<T12 >::type _12 , typename detail::call_param<T13 >::type _13 , typename detail::call_param<T14 >::type _14 , typename detail::call_param<T15 >::type _15 , typename detail::call_param<T16 >::type _16 , typename detail::call_param<T17 >::type _17 , typename detail::call_param<T18 >::type _18 , typename detail::call_param<T19 >::type _19 , typename detail::call_param<T20 >::type _20 , typename detail::call_param<T21 >::type _21 , typename detail::call_param<T22 >::type _22 , typename detail::call_param<T23 >::type _23)
        : vec(_0 , _1 , _2 , _3 , _4 , _5 , _6 , _7 , _8 , _9 , _10 , _11 , _12 , _13 , _14 , _15 , _16 , _17 , _18 , _19 , _20 , _21 , _22 , _23) {}
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
    template <typename U0 , typename U1 , typename U2 , typename U3 , typename U4 , typename U5 , typename U6 , typename U7 , typename U8 , typename U9 , typename U10 , typename U11 , typename U12 , typename U13 , typename U14 , typename U15 , typename U16 , typename U17 , typename U18 , typename U19 , typename U20 , typename U21 , typename U22 , typename U23>
    BOOST_FUSION_GPU_ENABLED
    vector(U0 && _0 , U1 && _1 , U2 && _2 , U3 && _3 , U4 && _4 , U5 && _5 , U6 && _6 , U7 && _7 , U8 && _8 , U9 && _9 , U10 && _10 , U11 && _11 , U12 && _12 , U13 && _13 , U14 && _14 , U15 && _15 , U16 && _16 , U17 && _17 , U18 && _18 , U19 && _19 , U20 && _20 , U21 && _21 , U22 && _22 , U23 && _23)
        : vec(std::forward<U0>(_0) , std::forward<U1>(_1) , std::forward<U2>(_2) , std::forward<U3>(_3) , std::forward<U4>(_4) , std::forward<U5>(_5) , std::forward<U6>(_6) , std::forward<U7>(_7) , std::forward<U8>(_8) , std::forward<U9>(_9) , std::forward<U10>(_10) , std::forward<U11>(_11) , std::forward<U12>(_12) , std::forward<U13>(_13) , std::forward<U14>(_14) , std::forward<U15>(_15) , std::forward<U16>(_16) , std::forward<U17>(_17) , std::forward<U18>(_18) , std::forward<U19>(_19) , std::forward<U20>(_20) , std::forward<U21>(_21) , std::forward<U22>(_22) , std::forward<U23>(_23)) {}
# endif
    BOOST_FUSION_GPU_ENABLED
    vector(typename detail::call_param<T0 >::type _0 , typename detail::call_param<T1 >::type _1 , typename detail::call_param<T2 >::type _2 , typename detail::call_param<T3 >::type _3 , typename detail::call_param<T4 >::type _4 , typename detail::call_param<T5 >::type _5 , typename detail::call_param<T6 >::type _6 , typename detail::call_param<T7 >::type _7 , typename detail::call_param<T8 >::type _8 , typename detail::call_param<T9 >::type _9 , typename detail::call_param<T10 >::type _10 , typename detail::call_param<T11 >::type _11 , typename detail::call_param<T12 >::type _12 , typename detail::call_param<T13 >::type _13 , typename detail::call_param<T14 >::type _14 , typename detail::call_param<T15 >::type _15 , typename detail::call_param<T16 >::type _16 , typename detail::call_param<T17 >::type _17 , typename detail::call_param<T18 >::type _18 , typename detail::call_param<T19 >::type _19 , typename detail::call_param<T20 >::type _20 , typename detail::call_param<T21 >::type _21 , typename detail::call_param<T22 >::type _22 , typename detail::call_param<T23 >::type _23 , typename detail::call_param<T24 >::type _24)
        : vec(_0 , _1 , _2 , _3 , _4 , _5 , _6 , _7 , _8 , _9 , _10 , _11 , _12 , _13 , _14 , _15 , _16 , _17 , _18 , _19 , _20 , _21 , _22 , _23 , _24) {}
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
    template <typename U0 , typename U1 , typename U2 , typename U3 , typename U4 , typename U5 , typename U6 , typename U7 , typename U8 , typename U9 , typename U10 , typename U11 , typename U12 , typename U13 , typename U14 , typename U15 , typename U16 , typename U17 , typename U18 , typename U19 , typename U20 , typename U21 , typename U22 , typename U23 , typename U24>
    BOOST_FUSION_GPU_ENABLED
    vector(U0 && _0 , U1 && _1 , U2 && _2 , U3 && _3 , U4 && _4 , U5 && _5 , U6 && _6 , U7 && _7 , U8 && _8 , U9 && _9 , U10 && _10 , U11 && _11 , U12 && _12 , U13 && _13 , U14 && _14 , U15 && _15 , U16 && _16 , U17 && _17 , U18 && _18 , U19 && _19 , U20 && _20 , U21 && _21 , U22 && _22 , U23 && _23 , U24 && _24)
        : vec(std::forward<U0>(_0) , std::forward<U1>(_1) , std::forward<U2>(_2) , std::forward<U3>(_3) , std::forward<U4>(_4) , std::forward<U5>(_5) , std::forward<U6>(_6) , std::forward<U7>(_7) , std::forward<U8>(_8) , std::forward<U9>(_9) , std::forward<U10>(_10) , std::forward<U11>(_11) , std::forward<U12>(_12) , std::forward<U13>(_13) , std::forward<U14>(_14) , std::forward<U15>(_15) , std::forward<U16>(_16) , std::forward<U17>(_17) , std::forward<U18>(_18) , std::forward<U19>(_19) , std::forward<U20>(_20) , std::forward<U21>(_21) , std::forward<U22>(_22) , std::forward<U23>(_23) , std::forward<U24>(_24)) {}
# endif
    BOOST_FUSION_GPU_ENABLED
    vector(typename detail::call_param<T0 >::type _0 , typename detail::call_param<T1 >::type _1 , typename detail::call_param<T2 >::type _2 , typename detail::call_param<T3 >::type _3 , typename detail::call_param<T4 >::type _4 , typename detail::call_param<T5 >::type _5 , typename detail::call_param<T6 >::type _6 , typename detail::call_param<T7 >::type _7 , typename detail::call_param<T8 >::type _8 , typename detail::call_param<T9 >::type _9 , typename detail::call_param<T10 >::type _10 , typename detail::call_param<T11 >::type _11 , typename detail::call_param<T12 >::type _12 , typename detail::call_param<T13 >::type _13 , typename detail::call_param<T14 >::type _14 , typename detail::call_param<T15 >::type _15 , typename detail::call_param<T16 >::type _16 , typename detail::call_param<T17 >::type _17 , typename detail::call_param<T18 >::type _18 , typename detail::call_param<T19 >::type _19 , typename detail::call_param<T20 >::type _20 , typename detail::call_param<T21 >::type _21 , typename detail::call_param<T22 >::type _22 , typename detail::call_param<T23 >::type _23 , typename detail::call_param<T24 >::type _24 , typename detail::call_param<T25 >::type _25)
        : vec(_0 , _1 , _2 , _3 , _4 , _5 , _6 , _7 , _8 , _9 , _10 , _11 , _12 , _13 , _14 , _15 , _16 , _17 , _18 , _19 , _20 , _21 , _22 , _23 , _24 , _25) {}
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
    template <typename U0 , typename U1 , typename U2 , typename U3 , typename U4 , typename U5 , typename U6 , typename U7 , typename U8 , typename U9 , typename U10 , typename U11 , typename U12 , typename U13 , typename U14 , typename U15 , typename U16 , typename U17 , typename U18 , typename U19 , typename U20 , typename U21 , typename U22 , typename U23 , typename U24 , typename U25>
    BOOST_FUSION_GPU_ENABLED
    vector(U0 && _0 , U1 && _1 , U2 && _2 , U3 && _3 , U4 && _4 , U5 && _5 , U6 && _6 , U7 && _7 , U8 && _8 , U9 && _9 , U10 && _10 , U11 && _11 , U12 && _12 , U13 && _13 , U14 && _14 , U15 && _15 , U16 && _16 , U17 && _17 , U18 && _18 , U19 && _19 , U20 && _20 , U21 && _21 , U22 && _22 , U23 && _23 , U24 && _24 , U25 && _25)
        : vec(std::forward<U0>(_0) , std::forward<U1>(_1) , std::forward<U2>(_2) , std::forward<U3>(_3) , std::forward<U4>(_4) , std::forward<U5>(_5) , std::forward<U6>(_6) , std::forward<U7>(_7) , std::forward<U8>(_8) , std::forward<U9>(_9) , std::forward<U10>(_10) , std::forward<U11>(_11) , std::forward<U12>(_12) , std::forward<U13>(_13) , std::forward<U14>(_14) , std::forward<U15>(_15) , std::forward<U16>(_16) , std::forward<U17>(_17) , std::forward<U18>(_18) , std::forward<U19>(_19) , std::forward<U20>(_20) , std::forward<U21>(_21) , std::forward<U22>(_22) , std::forward<U23>(_23) , std::forward<U24>(_24) , std::forward<U25>(_25)) {}
# endif
    BOOST_FUSION_GPU_ENABLED
    vector(typename detail::call_param<T0 >::type _0 , typename detail::call_param<T1 >::type _1 , typename detail::call_param<T2 >::type _2 , typename detail::call_param<T3 >::type _3 , typename detail::call_param<T4 >::type _4 , typename detail::call_param<T5 >::type _5 , typename detail::call_param<T6 >::type _6 , typename detail::call_param<T7 >::type _7 , typename detail::call_param<T8 >::type _8 , typename detail::call_param<T9 >::type _9 , typename detail::call_param<T10 >::type _10 , typename detail::call_param<T11 >::type _11 , typename detail::call_param<T12 >::type _12 , typename detail::call_param<T13 >::type _13 , typename detail::call_param<T14 >::type _14 , typename detail::call_param<T15 >::type _15 , typename detail::call_param<T16 >::type _16 , typename detail::call_param<T17 >::type _17 , typename detail::call_param<T18 >::type _18 , typename detail::call_param<T19 >::type _19 , typename detail::call_param<T20 >::type _20 , typename detail::call_param<T21 >::type _21 , typename detail::call_param<T22 >::type _22 , typename detail::call_param<T23 >::type _23 , typename detail::call_param<T24 >::type _24 , typename detail::call_param<T25 >::type _25 , typename detail::call_param<T26 >::type _26)
        : vec(_0 , _1 , _2 , _3 , _4 , _5 , _6 , _7 , _8 , _9 , _10 , _11 , _12 , _13 , _14 , _15 , _16 , _17 , _18 , _19 , _20 , _21 , _22 , _23 , _24 , _25 , _26) {}
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
    template <typename U0 , typename U1 , typename U2 , typename U3 , typename U4 , typename U5 , typename U6 , typename U7 , typename U8 , typename U9 , typename U10 , typename U11 , typename U12 , typename U13 , typename U14 , typename U15 , typename U16 , typename U17 , typename U18 , typename U19 , typename U20 , typename U21 , typename U22 , typename U23 , typename U24 , typename U25 , typename U26>
    BOOST_FUSION_GPU_ENABLED
    vector(U0 && _0 , U1 && _1 , U2 && _2 , U3 && _3 , U4 && _4 , U5 && _5 , U6 && _6 , U7 && _7 , U8 && _8 , U9 && _9 , U10 && _10 , U11 && _11 , U12 && _12 , U13 && _13 , U14 && _14 , U15 && _15 , U16 && _16 , U17 && _17 , U18 && _18 , U19 && _19 , U20 && _20 , U21 && _21 , U22 && _22 , U23 && _23 , U24 && _24 , U25 && _25 , U26 && _26)
        : vec(std::forward<U0>(_0) , std::forward<U1>(_1) , std::forward<U2>(_2) , std::forward<U3>(_3) , std::forward<U4>(_4) , std::forward<U5>(_5) , std::forward<U6>(_6) , std::forward<U7>(_7) , std::forward<U8>(_8) , std::forward<U9>(_9) , std::forward<U10>(_10) , std::forward<U11>(_11) , std::forward<U12>(_12) , std::forward<U13>(_13) , std::forward<U14>(_14) , std::forward<U15>(_15) , std::forward<U16>(_16) , std::forward<U17>(_17) , std::forward<U18>(_18) , std::forward<U19>(_19) , std::forward<U20>(_20) , std::forward<U21>(_21) , std::forward<U22>(_22) , std::forward<U23>(_23) , std::forward<U24>(_24) , std::forward<U25>(_25) , std::forward<U26>(_26)) {}
# endif
    BOOST_FUSION_GPU_ENABLED
    vector(typename detail::call_param<T0 >::type _0 , typename detail::call_param<T1 >::type _1 , typename detail::call_param<T2 >::type _2 , typename detail::call_param<T3 >::type _3 , typename detail::call_param<T4 >::type _4 , typename detail::call_param<T5 >::type _5 , typename detail::call_param<T6 >::type _6 , typename detail::call_param<T7 >::type _7 , typename detail::call_param<T8 >::type _8 , typename detail::call_param<T9 >::type _9 , typename detail::call_param<T10 >::type _10 , typename detail::call_param<T11 >::type _11 , typename detail::call_param<T12 >::type _12 , typename detail::call_param<T13 >::type _13 , typename detail::call_param<T14 >::type _14 , typename detail::call_param<T15 >::type _15 , typename detail::call_param<T16 >::type _16 , typename detail::call_param<T17 >::type _17 , typename detail::call_param<T18 >::type _18 , typename detail::call_param<T19 >::type _19 , typename detail::call_param<T20 >::type _20 , typename detail::call_param<T21 >::type _21 , typename detail::call_param<T22 >::type _22 , typename detail::call_param<T23 >::type _23 , typename detail::call_param<T24 >::type _24 , typename detail::call_param<T25 >::type _25 , typename detail::call_param<T26 >::type _26 , typename detail::call_param<T27 >::type _27)
        : vec(_0 , _1 , _2 , _3 , _4 , _5 , _6 , _7 , _8 , _9 , _10 , _11 , _12 , _13 , _14 , _15 , _16 , _17 , _18 , _19 , _20 , _21 , _22 , _23 , _24 , _25 , _26 , _27) {}
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
    template <typename U0 , typename U1 , typename U2 , typename U3 , typename U4 , typename U5 , typename U6 , typename U7 , typename U8 , typename U9 , typename U10 , typename U11 , typename U12 , typename U13 , typename U14 , typename U15 , typename U16 , typename U17 , typename U18 , typename U19 , typename U20 , typename U21 , typename U22 , typename U23 , typename U24 , typename U25 , typename U26 , typename U27>
    BOOST_FUSION_GPU_ENABLED
    vector(U0 && _0 , U1 && _1 , U2 && _2 , U3 && _3 , U4 && _4 , U5 && _5 , U6 && _6 , U7 && _7 , U8 && _8 , U9 && _9 , U10 && _10 , U11 && _11 , U12 && _12 , U13 && _13 , U14 && _14 , U15 && _15 , U16 && _16 , U17 && _17 , U18 && _18 , U19 && _19 , U20 && _20 , U21 && _21 , U22 && _22 , U23 && _23 , U24 && _24 , U25 && _25 , U26 && _26 , U27 && _27)
        : vec(std::forward<U0>(_0) , std::forward<U1>(_1) , std::forward<U2>(_2) , std::forward<U3>(_3) , std::forward<U4>(_4) , std::forward<U5>(_5) , std::forward<U6>(_6) , std::forward<U7>(_7) , std::forward<U8>(_8) , std::forward<U9>(_9) , std::forward<U10>(_10) , std::forward<U11>(_11) , std::forward<U12>(_12) , std::forward<U13>(_13) , std::forward<U14>(_14) , std::forward<U15>(_15) , std::forward<U16>(_16) , std::forward<U17>(_17) , std::forward<U18>(_18) , std::forward<U19>(_19) , std::forward<U20>(_20) , std::forward<U21>(_21) , std::forward<U22>(_22) , std::forward<U23>(_23) , std::forward<U24>(_24) , std::forward<U25>(_25) , std::forward<U26>(_26) , std::forward<U27>(_27)) {}
# endif
    BOOST_FUSION_GPU_ENABLED
    vector(typename detail::call_param<T0 >::type _0 , typename detail::call_param<T1 >::type _1 , typename detail::call_param<T2 >::type _2 , typename detail::call_param<T3 >::type _3 , typename detail::call_param<T4 >::type _4 , typename detail::call_param<T5 >::type _5 , typename detail::call_param<T6 >::type _6 , typename detail::call_param<T7 >::type _7 , typename detail::call_param<T8 >::type _8 , typename detail::call_param<T9 >::type _9 , typename detail::call_param<T10 >::type _10 , typename detail::call_param<T11 >::type _11 , typename detail::call_param<T12 >::type _12 , typename detail::call_param<T13 >::type _13 , typename detail::call_param<T14 >::type _14 , typename detail::call_param<T15 >::type _15 , typename detail::call_param<T16 >::type _16 , typename detail::call_param<T17 >::type _17 , typename detail::call_param<T18 >::type _18 , typename detail::call_param<T19 >::type _19 , typename detail::call_param<T20 >::type _20 , typename detail::call_param<T21 >::type _21 , typename detail::call_param<T22 >::type _22 , typename detail::call_param<T23 >::type _23 , typename detail::call_param<T24 >::type _24 , typename detail::call_param<T25 >::type _25 , typename detail::call_param<T26 >::type _26 , typename detail::call_param<T27 >::type _27 , typename detail::call_param<T28 >::type _28)
        : vec(_0 , _1 , _2 , _3 , _4 , _5 , _6 , _7 , _8 , _9 , _10 , _11 , _12 , _13 , _14 , _15 , _16 , _17 , _18 , _19 , _20 , _21 , _22 , _23 , _24 , _25 , _26 , _27 , _28) {}
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
    template <typename U0 , typename U1 , typename U2 , typename U3 , typename U4 , typename U5 , typename U6 , typename U7 , typename U8 , typename U9 , typename U10 , typename U11 , typename U12 , typename U13 , typename U14 , typename U15 , typename U16 , typename U17 , typename U18 , typename U19 , typename U20 , typename U21 , typename U22 , typename U23 , typename U24 , typename U25 , typename U26 , typename U27 , typename U28>
    BOOST_FUSION_GPU_ENABLED
    vector(U0 && _0 , U1 && _1 , U2 && _2 , U3 && _3 , U4 && _4 , U5 && _5 , U6 && _6 , U7 && _7 , U8 && _8 , U9 && _9 , U10 && _10 , U11 && _11 , U12 && _12 , U13 && _13 , U14 && _14 , U15 && _15 , U16 && _16 , U17 && _17 , U18 && _18 , U19 && _19 , U20 && _20 , U21 && _21 , U22 && _22 , U23 && _23 , U24 && _24 , U25 && _25 , U26 && _26 , U27 && _27 , U28 && _28)
        : vec(std::forward<U0>(_0) , std::forward<U1>(_1) , std::forward<U2>(_2) , std::forward<U3>(_3) , std::forward<U4>(_4) , std::forward<U5>(_5) , std::forward<U6>(_6) , std::forward<U7>(_7) , std::forward<U8>(_8) , std::forward<U9>(_9) , std::forward<U10>(_10) , std::forward<U11>(_11) , std::forward<U12>(_12) , std::forward<U13>(_13) , std::forward<U14>(_14) , std::forward<U15>(_15) , std::forward<U16>(_16) , std::forward<U17>(_17) , std::forward<U18>(_18) , std::forward<U19>(_19) , std::forward<U20>(_20) , std::forward<U21>(_21) , std::forward<U22>(_22) , std::forward<U23>(_23) , std::forward<U24>(_24) , std::forward<U25>(_25) , std::forward<U26>(_26) , std::forward<U27>(_27) , std::forward<U28>(_28)) {}
# endif
    BOOST_FUSION_GPU_ENABLED
    vector(typename detail::call_param<T0 >::type _0 , typename detail::call_param<T1 >::type _1 , typename detail::call_param<T2 >::type _2 , typename detail::call_param<T3 >::type _3 , typename detail::call_param<T4 >::type _4 , typename detail::call_param<T5 >::type _5 , typename detail::call_param<T6 >::type _6 , typename detail::call_param<T7 >::type _7 , typename detail::call_param<T8 >::type _8 , typename detail::call_param<T9 >::type _9 , typename detail::call_param<T10 >::type _10 , typename detail::call_param<T11 >::type _11 , typename detail::call_param<T12 >::type _12 , typename detail::call_param<T13 >::type _13 , typename detail::call_param<T14 >::type _14 , typename detail::call_param<T15 >::type _15 , typename detail::call_param<T16 >::type _16 , typename detail::call_param<T17 >::type _17 , typename detail::call_param<T18 >::type _18 , typename detail::call_param<T19 >::type _19 , typename detail::call_param<T20 >::type _20 , typename detail::call_param<T21 >::type _21 , typename detail::call_param<T22 >::type _22 , typename detail::call_param<T23 >::type _23 , typename detail::call_param<T24 >::type _24 , typename detail::call_param<T25 >::type _25 , typename detail::call_param<T26 >::type _26 , typename detail::call_param<T27 >::type _27 , typename detail::call_param<T28 >::type _28 , typename detail::call_param<T29 >::type _29)
        : vec(_0 , _1 , _2 , _3 , _4 , _5 , _6 , _7 , _8 , _9 , _10 , _11 , _12 , _13 , _14 , _15 , _16 , _17 , _18 , _19 , _20 , _21 , _22 , _23 , _24 , _25 , _26 , _27 , _28 , _29) {}
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
    template <typename U0 , typename U1 , typename U2 , typename U3 , typename U4 , typename U5 , typename U6 , typename U7 , typename U8 , typename U9 , typename U10 , typename U11 , typename U12 , typename U13 , typename U14 , typename U15 , typename U16 , typename U17 , typename U18 , typename U19 , typename U20 , typename U21 , typename U22 , typename U23 , typename U24 , typename U25 , typename U26 , typename U27 , typename U28 , typename U29>
    BOOST_FUSION_GPU_ENABLED
    vector(U0 && _0 , U1 && _1 , U2 && _2 , U3 && _3 , U4 && _4 , U5 && _5 , U6 && _6 , U7 && _7 , U8 && _8 , U9 && _9 , U10 && _10 , U11 && _11 , U12 && _12 , U13 && _13 , U14 && _14 , U15 && _15 , U16 && _16 , U17 && _17 , U18 && _18 , U19 && _19 , U20 && _20 , U21 && _21 , U22 && _22 , U23 && _23 , U24 && _24 , U25 && _25 , U26 && _26 , U27 && _27 , U28 && _28 , U29 && _29)
        : vec(std::forward<U0>(_0) , std::forward<U1>(_1) , std::forward<U2>(_2) , std::forward<U3>(_3) , std::forward<U4>(_4) , std::forward<U5>(_5) , std::forward<U6>(_6) , std::forward<U7>(_7) , std::forward<U8>(_8) , std::forward<U9>(_9) , std::forward<U10>(_10) , std::forward<U11>(_11) , std::forward<U12>(_12) , std::forward<U13>(_13) , std::forward<U14>(_14) , std::forward<U15>(_15) , std::forward<U16>(_16) , std::forward<U17>(_17) , std::forward<U18>(_18) , std::forward<U19>(_19) , std::forward<U20>(_20) , std::forward<U21>(_21) , std::forward<U22>(_22) , std::forward<U23>(_23) , std::forward<U24>(_24) , std::forward<U25>(_25) , std::forward<U26>(_26) , std::forward<U27>(_27) , std::forward<U28>(_28) , std::forward<U29>(_29)) {}
# endif
    BOOST_FUSION_GPU_ENABLED
    vector(typename detail::call_param<T0 >::type _0 , typename detail::call_param<T1 >::type _1 , typename detail::call_param<T2 >::type _2 , typename detail::call_param<T3 >::type _3 , typename detail::call_param<T4 >::type _4 , typename detail::call_param<T5 >::type _5 , typename detail::call_param<T6 >::type _6 , typename detail::call_param<T7 >::type _7 , typename detail::call_param<T8 >::type _8 , typename detail::call_param<T9 >::type _9 , typename detail::call_param<T10 >::type _10 , typename detail::call_param<T11 >::type _11 , typename detail::call_param<T12 >::type _12 , typename detail::call_param<T13 >::type _13 , typename detail::call_param<T14 >::type _14 , typename detail::call_param<T15 >::type _15 , typename detail::call_param<T16 >::type _16 , typename detail::call_param<T17 >::type _17 , typename detail::call_param<T18 >::type _18 , typename detail::call_param<T19 >::type _19 , typename detail::call_param<T20 >::type _20 , typename detail::call_param<T21 >::type _21 , typename detail::call_param<T22 >::type _22 , typename detail::call_param<T23 >::type _23 , typename detail::call_param<T24 >::type _24 , typename detail::call_param<T25 >::type _25 , typename detail::call_param<T26 >::type _26 , typename detail::call_param<T27 >::type _27 , typename detail::call_param<T28 >::type _28 , typename detail::call_param<T29 >::type _29 , typename detail::call_param<T30 >::type _30)
        : vec(_0 , _1 , _2 , _3 , _4 , _5 , _6 , _7 , _8 , _9 , _10 , _11 , _12 , _13 , _14 , _15 , _16 , _17 , _18 , _19 , _20 , _21 , _22 , _23 , _24 , _25 , _26 , _27 , _28 , _29 , _30) {}
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
    template <typename U0 , typename U1 , typename U2 , typename U3 , typename U4 , typename U5 , typename U6 , typename U7 , typename U8 , typename U9 , typename U10 , typename U11 , typename U12 , typename U13 , typename U14 , typename U15 , typename U16 , typename U17 , typename U18 , typename U19 , typename U20 , typename U21 , typename U22 , typename U23 , typename U24 , typename U25 , typename U26 , typename U27 , typename U28 , typename U29 , typename U30>
    BOOST_FUSION_GPU_ENABLED
    vector(U0 && _0 , U1 && _1 , U2 && _2 , U3 && _3 , U4 && _4 , U5 && _5 , U6 && _6 , U7 && _7 , U8 && _8 , U9 && _9 , U10 && _10 , U11 && _11 , U12 && _12 , U13 && _13 , U14 && _14 , U15 && _15 , U16 && _16 , U17 && _17 , U18 && _18 , U19 && _19 , U20 && _20 , U21 && _21 , U22 && _22 , U23 && _23 , U24 && _24 , U25 && _25 , U26 && _26 , U27 && _27 , U28 && _28 , U29 && _29 , U30 && _30)
        : vec(std::forward<U0>(_0) , std::forward<U1>(_1) , std::forward<U2>(_2) , std::forward<U3>(_3) , std::forward<U4>(_4) , std::forward<U5>(_5) , std::forward<U6>(_6) , std::forward<U7>(_7) , std::forward<U8>(_8) , std::forward<U9>(_9) , std::forward<U10>(_10) , std::forward<U11>(_11) , std::forward<U12>(_12) , std::forward<U13>(_13) , std::forward<U14>(_14) , std::forward<U15>(_15) , std::forward<U16>(_16) , std::forward<U17>(_17) , std::forward<U18>(_18) , std::forward<U19>(_19) , std::forward<U20>(_20) , std::forward<U21>(_21) , std::forward<U22>(_22) , std::forward<U23>(_23) , std::forward<U24>(_24) , std::forward<U25>(_25) , std::forward<U26>(_26) , std::forward<U27>(_27) , std::forward<U28>(_28) , std::forward<U29>(_29) , std::forward<U30>(_30)) {}
# endif
    BOOST_FUSION_GPU_ENABLED
    vector(typename detail::call_param<T0 >::type _0 , typename detail::call_param<T1 >::type _1 , typename detail::call_param<T2 >::type _2 , typename detail::call_param<T3 >::type _3 , typename detail::call_param<T4 >::type _4 , typename detail::call_param<T5 >::type _5 , typename detail::call_param<T6 >::type _6 , typename detail::call_param<T7 >::type _7 , typename detail::call_param<T8 >::type _8 , typename detail::call_param<T9 >::type _9 , typename detail::call_param<T10 >::type _10 , typename detail::call_param<T11 >::type _11 , typename detail::call_param<T12 >::type _12 , typename detail::call_param<T13 >::type _13 , typename detail::call_param<T14 >::type _14 , typename detail::call_param<T15 >::type _15 , typename detail::call_param<T16 >::type _16 , typename detail::call_param<T17 >::type _17 , typename detail::call_param<T18 >::type _18 , typename detail::call_param<T19 >::type _19 , typename detail::call_param<T20 >::type _20 , typename detail::call_param<T21 >::type _21 , typename detail::call_param<T22 >::type _22 , typename detail::call_param<T23 >::type _23 , typename detail::call_param<T24 >::type _24 , typename detail::call_param<T25 >::type _25 , typename detail::call_param<T26 >::type _26 , typename detail::call_param<T27 >::type _27 , typename detail::call_param<T28 >::type _28 , typename detail::call_param<T29 >::type _29 , typename detail::call_param<T30 >::type _30 , typename detail::call_param<T31 >::type _31)
        : vec(_0 , _1 , _2 , _3 , _4 , _5 , _6 , _7 , _8 , _9 , _10 , _11 , _12 , _13 , _14 , _15 , _16 , _17 , _18 , _19 , _20 , _21 , _22 , _23 , _24 , _25 , _26 , _27 , _28 , _29 , _30 , _31) {}
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
    template <typename U0 , typename U1 , typename U2 , typename U3 , typename U4 , typename U5 , typename U6 , typename U7 , typename U8 , typename U9 , typename U10 , typename U11 , typename U12 , typename U13 , typename U14 , typename U15 , typename U16 , typename U17 , typename U18 , typename U19 , typename U20 , typename U21 , typename U22 , typename U23 , typename U24 , typename U25 , typename U26 , typename U27 , typename U28 , typename U29 , typename U30 , typename U31>
    BOOST_FUSION_GPU_ENABLED
    vector(U0 && _0 , U1 && _1 , U2 && _2 , U3 && _3 , U4 && _4 , U5 && _5 , U6 && _6 , U7 && _7 , U8 && _8 , U9 && _9 , U10 && _10 , U11 && _11 , U12 && _12 , U13 && _13 , U14 && _14 , U15 && _15 , U16 && _16 , U17 && _17 , U18 && _18 , U19 && _19 , U20 && _20 , U21 && _21 , U22 && _22 , U23 && _23 , U24 && _24 , U25 && _25 , U26 && _26 , U27 && _27 , U28 && _28 , U29 && _29 , U30 && _30 , U31 && _31)
        : vec(std::forward<U0>(_0) , std::forward<U1>(_1) , std::forward<U2>(_2) , std::forward<U3>(_3) , std::forward<U4>(_4) , std::forward<U5>(_5) , std::forward<U6>(_6) , std::forward<U7>(_7) , std::forward<U8>(_8) , std::forward<U9>(_9) , std::forward<U10>(_10) , std::forward<U11>(_11) , std::forward<U12>(_12) , std::forward<U13>(_13) , std::forward<U14>(_14) , std::forward<U15>(_15) , std::forward<U16>(_16) , std::forward<U17>(_17) , std::forward<U18>(_18) , std::forward<U19>(_19) , std::forward<U20>(_20) , std::forward<U21>(_21) , std::forward<U22>(_22) , std::forward<U23>(_23) , std::forward<U24>(_24) , std::forward<U25>(_25) , std::forward<U26>(_26) , std::forward<U27>(_27) , std::forward<U28>(_28) , std::forward<U29>(_29) , std::forward<U30>(_30) , std::forward<U31>(_31)) {}
# endif
    BOOST_FUSION_GPU_ENABLED
    vector(typename detail::call_param<T0 >::type _0 , typename detail::call_param<T1 >::type _1 , typename detail::call_param<T2 >::type _2 , typename detail::call_param<T3 >::type _3 , typename detail::call_param<T4 >::type _4 , typename detail::call_param<T5 >::type _5 , typename detail::call_param<T6 >::type _6 , typename detail::call_param<T7 >::type _7 , typename detail::call_param<T8 >::type _8 , typename detail::call_param<T9 >::type _9 , typename detail::call_param<T10 >::type _10 , typename detail::call_param<T11 >::type _11 , typename detail::call_param<T12 >::type _12 , typename detail::call_param<T13 >::type _13 , typename detail::call_param<T14 >::type _14 , typename detail::call_param<T15 >::type _15 , typename detail::call_param<T16 >::type _16 , typename detail::call_param<T17 >::type _17 , typename detail::call_param<T18 >::type _18 , typename detail::call_param<T19 >::type _19 , typename detail::call_param<T20 >::type _20 , typename detail::call_param<T21 >::type _21 , typename detail::call_param<T22 >::type _22 , typename detail::call_param<T23 >::type _23 , typename detail::call_param<T24 >::type _24 , typename detail::call_param<T25 >::type _25 , typename detail::call_param<T26 >::type _26 , typename detail::call_param<T27 >::type _27 , typename detail::call_param<T28 >::type _28 , typename detail::call_param<T29 >::type _29 , typename detail::call_param<T30 >::type _30 , typename detail::call_param<T31 >::type _31 , typename detail::call_param<T32 >::type _32)
        : vec(_0 , _1 , _2 , _3 , _4 , _5 , _6 , _7 , _8 , _9 , _10 , _11 , _12 , _13 , _14 , _15 , _16 , _17 , _18 , _19 , _20 , _21 , _22 , _23 , _24 , _25 , _26 , _27 , _28 , _29 , _30 , _31 , _32) {}
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
    template <typename U0 , typename U1 , typename U2 , typename U3 , typename U4 , typename U5 , typename U6 , typename U7 , typename U8 , typename U9 , typename U10 , typename U11 , typename U12 , typename U13 , typename U14 , typename U15 , typename U16 , typename U17 , typename U18 , typename U19 , typename U20 , typename U21 , typename U22 , typename U23 , typename U24 , typename U25 , typename U26 , typename U27 , typename U28 , typename U29 , typename U30 , typename U31 , typename U32>
    BOOST_FUSION_GPU_ENABLED
    vector(U0 && _0 , U1 && _1 , U2 && _2 , U3 && _3 , U4 && _4 , U5 && _5 , U6 && _6 , U7 && _7 , U8 && _8 , U9 && _9 , U10 && _10 , U11 && _11 , U12 && _12 , U13 && _13 , U14 && _14 , U15 && _15 , U16 && _16 , U17 && _17 , U18 && _18 , U19 && _19 , U20 && _20 , U21 && _21 , U22 && _22 , U23 && _23 , U24 && _24 , U25 && _25 , U26 && _26 , U27 && _27 , U28 && _28 , U29 && _29 , U30 && _30 , U31 && _31 , U32 && _32)
        : vec(std::forward<U0>(_0) , std::forward<U1>(_1) , std::forward<U2>(_2) , std::forward<U3>(_3) , std::forward<U4>(_4) , std::forward<U5>(_5) , std::forward<U6>(_6) , std::forward<U7>(_7) , std::forward<U8>(_8) , std::forward<U9>(_9) , std::forward<U10>(_10) , std::forward<U11>(_11) , std::forward<U12>(_12) , std::forward<U13>(_13) , std::forward<U14>(_14) , std::forward<U15>(_15) , std::forward<U16>(_16) , std::forward<U17>(_17) , std::forward<U18>(_18) , std::forward<U19>(_19) , std::forward<U20>(_20) , std::forward<U21>(_21) , std::forward<U22>(_22) , std::forward<U23>(_23) , std::forward<U24>(_24) , std::forward<U25>(_25) , std::forward<U26>(_26) , std::forward<U27>(_27) , std::forward<U28>(_28) , std::forward<U29>(_29) , std::forward<U30>(_30) , std::forward<U31>(_31) , std::forward<U32>(_32)) {}
# endif
    BOOST_FUSION_GPU_ENABLED
    vector(typename detail::call_param<T0 >::type _0 , typename detail::call_param<T1 >::type _1 , typename detail::call_param<T2 >::type _2 , typename detail::call_param<T3 >::type _3 , typename detail::call_param<T4 >::type _4 , typename detail::call_param<T5 >::type _5 , typename detail::call_param<T6 >::type _6 , typename detail::call_param<T7 >::type _7 , typename detail::call_param<T8 >::type _8 , typename detail::call_param<T9 >::type _9 , typename detail::call_param<T10 >::type _10 , typename detail::call_param<T11 >::type _11 , typename detail::call_param<T12 >::type _12 , typename detail::call_param<T13 >::type _13 , typename detail::call_param<T14 >::type _14 , typename detail::call_param<T15 >::type _15 , typename detail::call_param<T16 >::type _16 , typename detail::call_param<T17 >::type _17 , typename detail::call_param<T18 >::type _18 , typename detail::call_param<T19 >::type _19 , typename detail::call_param<T20 >::type _20 , typename detail::call_param<T21 >::type _21 , typename detail::call_param<T22 >::type _22 , typename detail::call_param<T23 >::type _23 , typename detail::call_param<T24 >::type _24 , typename detail::call_param<T25 >::type _25 , typename detail::call_param<T26 >::type _26 , typename detail::call_param<T27 >::type _27 , typename detail::call_param<T28 >::type _28 , typename detail::call_param<T29 >::type _29 , typename detail::call_param<T30 >::type _30 , typename detail::call_param<T31 >::type _31 , typename detail::call_param<T32 >::type _32 , typename detail::call_param<T33 >::type _33)
        : vec(_0 , _1 , _2 , _3 , _4 , _5 , _6 , _7 , _8 , _9 , _10 , _11 , _12 , _13 , _14 , _15 , _16 , _17 , _18 , _19 , _20 , _21 , _22 , _23 , _24 , _25 , _26 , _27 , _28 , _29 , _30 , _31 , _32 , _33) {}
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
    template <typename U0 , typename U1 , typename U2 , typename U3 , typename U4 , typename U5 , typename U6 , typename U7 , typename U8 , typename U9 , typename U10 , typename U11 , typename U12 , typename U13 , typename U14 , typename U15 , typename U16 , typename U17 , typename U18 , typename U19 , typename U20 , typename U21 , typename U22 , typename U23 , typename U24 , typename U25 , typename U26 , typename U27 , typename U28 , typename U29 , typename U30 , typename U31 , typename U32 , typename U33>
    BOOST_FUSION_GPU_ENABLED
    vector(U0 && _0 , U1 && _1 , U2 && _2 , U3 && _3 , U4 && _4 , U5 && _5 , U6 && _6 , U7 && _7 , U8 && _8 , U9 && _9 , U10 && _10 , U11 && _11 , U12 && _12 , U13 && _13 , U14 && _14 , U15 && _15 , U16 && _16 , U17 && _17 , U18 && _18 , U19 && _19 , U20 && _20 , U21 && _21 , U22 && _22 , U23 && _23 , U24 && _24 , U25 && _25 , U26 && _26 , U27 && _27 , U28 && _28 , U29 && _29 , U30 && _30 , U31 && _31 , U32 && _32 , U33 && _33)
        : vec(std::forward<U0>(_0) , std::forward<U1>(_1) , std::forward<U2>(_2) , std::forward<U3>(_3) , std::forward<U4>(_4) , std::forward<U5>(_5) , std::forward<U6>(_6) , std::forward<U7>(_7) , std::forward<U8>(_8) , std::forward<U9>(_9) , std::forward<U10>(_10) , std::forward<U11>(_11) , std::forward<U12>(_12) , std::forward<U13>(_13) , std::forward<U14>(_14) , std::forward<U15>(_15) , std::forward<U16>(_16) , std::forward<U17>(_17) , std::forward<U18>(_18) , std::forward<U19>(_19) , std::forward<U20>(_20) , std::forward<U21>(_21) , std::forward<U22>(_22) , std::forward<U23>(_23) , std::forward<U24>(_24) , std::forward<U25>(_25) , std::forward<U26>(_26) , std::forward<U27>(_27) , std::forward<U28>(_28) , std::forward<U29>(_29) , std::forward<U30>(_30) , std::forward<U31>(_31) , std::forward<U32>(_32) , std::forward<U33>(_33)) {}
# endif
    BOOST_FUSION_GPU_ENABLED
    vector(typename detail::call_param<T0 >::type _0 , typename detail::call_param<T1 >::type _1 , typename detail::call_param<T2 >::type _2 , typename detail::call_param<T3 >::type _3 , typename detail::call_param<T4 >::type _4 , typename detail::call_param<T5 >::type _5 , typename detail::call_param<T6 >::type _6 , typename detail::call_param<T7 >::type _7 , typename detail::call_param<T8 >::type _8 , typename detail::call_param<T9 >::type _9 , typename detail::call_param<T10 >::type _10 , typename detail::call_param<T11 >::type _11 , typename detail::call_param<T12 >::type _12 , typename detail::call_param<T13 >::type _13 , typename detail::call_param<T14 >::type _14 , typename detail::call_param<T15 >::type _15 , typename detail::call_param<T16 >::type _16 , typename detail::call_param<T17 >::type _17 , typename detail::call_param<T18 >::type _18 , typename detail::call_param<T19 >::type _19 , typename detail::call_param<T20 >::type _20 , typename detail::call_param<T21 >::type _21 , typename detail::call_param<T22 >::type _22 , typename detail::call_param<T23 >::type _23 , typename detail::call_param<T24 >::type _24 , typename detail::call_param<T25 >::type _25 , typename detail::call_param<T26 >::type _26 , typename detail::call_param<T27 >::type _27 , typename detail::call_param<T28 >::type _28 , typename detail::call_param<T29 >::type _29 , typename detail::call_param<T30 >::type _30 , typename detail::call_param<T31 >::type _31 , typename detail::call_param<T32 >::type _32 , typename detail::call_param<T33 >::type _33 , typename detail::call_param<T34 >::type _34)
        : vec(_0 , _1 , _2 , _3 , _4 , _5 , _6 , _7 , _8 , _9 , _10 , _11 , _12 , _13 , _14 , _15 , _16 , _17 , _18 , _19 , _20 , _21 , _22 , _23 , _24 , _25 , _26 , _27 , _28 , _29 , _30 , _31 , _32 , _33 , _34) {}
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
    template <typename U0 , typename U1 , typename U2 , typename U3 , typename U4 , typename U5 , typename U6 , typename U7 , typename U8 , typename U9 , typename U10 , typename U11 , typename U12 , typename U13 , typename U14 , typename U15 , typename U16 , typename U17 , typename U18 , typename U19 , typename U20 , typename U21 , typename U22 , typename U23 , typename U24 , typename U25 , typename U26 , typename U27 , typename U28 , typename U29 , typename U30 , typename U31 , typename U32 , typename U33 , typename U34>
    BOOST_FUSION_GPU_ENABLED
    vector(U0 && _0 , U1 && _1 , U2 && _2 , U3 && _3 , U4 && _4 , U5 && _5 , U6 && _6 , U7 && _7 , U8 && _8 , U9 && _9 , U10 && _10 , U11 && _11 , U12 && _12 , U13 && _13 , U14 && _14 , U15 && _15 , U16 && _16 , U17 && _17 , U18 && _18 , U19 && _19 , U20 && _20 , U21 && _21 , U22 && _22 , U23 && _23 , U24 && _24 , U25 && _25 , U26 && _26 , U27 && _27 , U28 && _28 , U29 && _29 , U30 && _30 , U31 && _31 , U32 && _32 , U33 && _33 , U34 && _34)
        : vec(std::forward<U0>(_0) , std::forward<U1>(_1) , std::forward<U2>(_2) , std::forward<U3>(_3) , std::forward<U4>(_4) , std::forward<U5>(_5) , std::forward<U6>(_6) , std::forward<U7>(_7) , std::forward<U8>(_8) , std::forward<U9>(_9) , std::forward<U10>(_10) , std::forward<U11>(_11) , std::forward<U12>(_12) , std::forward<U13>(_13) , std::forward<U14>(_14) , std::forward<U15>(_15) , std::forward<U16>(_16) , std::forward<U17>(_17) , std::forward<U18>(_18) , std::forward<U19>(_19) , std::forward<U20>(_20) , std::forward<U21>(_21) , std::forward<U22>(_22) , std::forward<U23>(_23) , std::forward<U24>(_24) , std::forward<U25>(_25) , std::forward<U26>(_26) , std::forward<U27>(_27) , std::forward<U28>(_28) , std::forward<U29>(_29) , std::forward<U30>(_30) , std::forward<U31>(_31) , std::forward<U32>(_32) , std::forward<U33>(_33) , std::forward<U34>(_34)) {}
# endif
    BOOST_FUSION_GPU_ENABLED
    vector(typename detail::call_param<T0 >::type _0 , typename detail::call_param<T1 >::type _1 , typename detail::call_param<T2 >::type _2 , typename detail::call_param<T3 >::type _3 , typename detail::call_param<T4 >::type _4 , typename detail::call_param<T5 >::type _5 , typename detail::call_param<T6 >::type _6 , typename detail::call_param<T7 >::type _7 , typename detail::call_param<T8 >::type _8 , typename detail::call_param<T9 >::type _9 , typename detail::call_param<T10 >::type _10 , typename detail::call_param<T11 >::type _11 , typename detail::call_param<T12 >::type _12 , typename detail::call_param<T13 >::type _13 , typename detail::call_param<T14 >::type _14 , typename detail::call_param<T15 >::type _15 , typename detail::call_param<T16 >::type _16 , typename detail::call_param<T17 >::type _17 , typename detail::call_param<T18 >::type _18 , typename detail::call_param<T19 >::type _19 , typename detail::call_param<T20 >::type _20 , typename detail::call_param<T21 >::type _21 , typename detail::call_param<T22 >::type _22 , typename detail::call_param<T23 >::type _23 , typename detail::call_param<T24 >::type _24 , typename detail::call_param<T25 >::type _25 , typename detail::call_param<T26 >::type _26 , typename detail::call_param<T27 >::type _27 , typename detail::call_param<T28 >::type _28 , typename detail::call_param<T29 >::type _29 , typename detail::call_param<T30 >::type _30 , typename detail::call_param<T31 >::type _31 , typename detail::call_param<T32 >::type _32 , typename detail::call_param<T33 >::type _33 , typename detail::call_param<T34 >::type _34 , typename detail::call_param<T35 >::type _35)
        : vec(_0 , _1 , _2 , _3 , _4 , _5 , _6 , _7 , _8 , _9 , _10 , _11 , _12 , _13 , _14 , _15 , _16 , _17 , _18 , _19 , _20 , _21 , _22 , _23 , _24 , _25 , _26 , _27 , _28 , _29 , _30 , _31 , _32 , _33 , _34 , _35) {}
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
    template <typename U0 , typename U1 , typename U2 , typename U3 , typename U4 , typename U5 , typename U6 , typename U7 , typename U8 , typename U9 , typename U10 , typename U11 , typename U12 , typename U13 , typename U14 , typename U15 , typename U16 , typename U17 , typename U18 , typename U19 , typename U20 , typename U21 , typename U22 , typename U23 , typename U24 , typename U25 , typename U26 , typename U27 , typename U28 , typename U29 , typename U30 , typename U31 , typename U32 , typename U33 , typename U34 , typename U35>
    BOOST_FUSION_GPU_ENABLED
    vector(U0 && _0 , U1 && _1 , U2 && _2 , U3 && _3 , U4 && _4 , U5 && _5 , U6 && _6 , U7 && _7 , U8 && _8 , U9 && _9 , U10 && _10 , U11 && _11 , U12 && _12 , U13 && _13 , U14 && _14 , U15 && _15 , U16 && _16 , U17 && _17 , U18 && _18 , U19 && _19 , U20 && _20 , U21 && _21 , U22 && _22 , U23 && _23 , U24 && _24 , U25 && _25 , U26 && _26 , U27 && _27 , U28 && _28 , U29 && _29 , U30 && _30 , U31 && _31 , U32 && _32 , U33 && _33 , U34 && _34 , U35 && _35)
        : vec(std::forward<U0>(_0) , std::forward<U1>(_1) , std::forward<U2>(_2) , std::forward<U3>(_3) , std::forward<U4>(_4) , std::forward<U5>(_5) , std::forward<U6>(_6) , std::forward<U7>(_7) , std::forward<U8>(_8) , std::forward<U9>(_9) , std::forward<U10>(_10) , std::forward<U11>(_11) , std::forward<U12>(_12) , std::forward<U13>(_13) , std::forward<U14>(_14) , std::forward<U15>(_15) , std::forward<U16>(_16) , std::forward<U17>(_17) , std::forward<U18>(_18) , std::forward<U19>(_19) , std::forward<U20>(_20) , std::forward<U21>(_21) , std::forward<U22>(_22) , std::forward<U23>(_23) , std::forward<U24>(_24) , std::forward<U25>(_25) , std::forward<U26>(_26) , std::forward<U27>(_27) , std::forward<U28>(_28) , std::forward<U29>(_29) , std::forward<U30>(_30) , std::forward<U31>(_31) , std::forward<U32>(_32) , std::forward<U33>(_33) , std::forward<U34>(_34) , std::forward<U35>(_35)) {}
# endif
    BOOST_FUSION_GPU_ENABLED
    vector(typename detail::call_param<T0 >::type _0 , typename detail::call_param<T1 >::type _1 , typename detail::call_param<T2 >::type _2 , typename detail::call_param<T3 >::type _3 , typename detail::call_param<T4 >::type _4 , typename detail::call_param<T5 >::type _5 , typename detail::call_param<T6 >::type _6 , typename detail::call_param<T7 >::type _7 , typename detail::call_param<T8 >::type _8 , typename detail::call_param<T9 >::type _9 , typename detail::call_param<T10 >::type _10 , typename detail::call_param<T11 >::type _11 , typename detail::call_param<T12 >::type _12 , typename detail::call_param<T13 >::type _13 , typename detail::call_param<T14 >::type _14 , typename detail::call_param<T15 >::type _15 , typename detail::call_param<T16 >::type _16 , typename detail::call_param<T17 >::type _17 , typename detail::call_param<T18 >::type _18 , typename detail::call_param<T19 >::type _19 , typename detail::call_param<T20 >::type _20 , typename detail::call_param<T21 >::type _21 , typename detail::call_param<T22 >::type _22 , typename detail::call_param<T23 >::type _23 , typename detail::call_param<T24 >::type _24 , typename detail::call_param<T25 >::type _25 , typename detail::call_param<T26 >::type _26 , typename detail::call_param<T27 >::type _27 , typename detail::call_param<T28 >::type _28 , typename detail::call_param<T29 >::type _29 , typename detail::call_param<T30 >::type _30 , typename detail::call_param<T31 >::type _31 , typename detail::call_param<T32 >::type _32 , typename detail::call_param<T33 >::type _33 , typename detail::call_param<T34 >::type _34 , typename detail::call_param<T35 >::type _35 , typename detail::call_param<T36 >::type _36)
        : vec(_0 , _1 , _2 , _3 , _4 , _5 , _6 , _7 , _8 , _9 , _10 , _11 , _12 , _13 , _14 , _15 , _16 , _17 , _18 , _19 , _20 , _21 , _22 , _23 , _24 , _25 , _26 , _27 , _28 , _29 , _30 , _31 , _32 , _33 , _34 , _35 , _36) {}
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
    template <typename U0 , typename U1 , typename U2 , typename U3 , typename U4 , typename U5 , typename U6 , typename U7 , typename U8 , typename U9 , typename U10 , typename U11 , typename U12 , typename U13 , typename U14 , typename U15 , typename U16 , typename U17 , typename U18 , typename U19 , typename U20 , typename U21 , typename U22 , typename U23 , typename U24 , typename U25 , typename U26 , typename U27 , typename U28 , typename U29 , typename U30 , typename U31 , typename U32 , typename U33 , typename U34 , typename U35 , typename U36>
    BOOST_FUSION_GPU_ENABLED
    vector(U0 && _0 , U1 && _1 , U2 && _2 , U3 && _3 , U4 && _4 , U5 && _5 , U6 && _6 , U7 && _7 , U8 && _8 , U9 && _9 , U10 && _10 , U11 && _11 , U12 && _12 , U13 && _13 , U14 && _14 , U15 && _15 , U16 && _16 , U17 && _17 , U18 && _18 , U19 && _19 , U20 && _20 , U21 && _21 , U22 && _22 , U23 && _23 , U24 && _24 , U25 && _25 , U26 && _26 , U27 && _27 , U28 && _28 , U29 && _29 , U30 && _30 , U31 && _31 , U32 && _32 , U33 && _33 , U34 && _34 , U35 && _35 , U36 && _36)
        : vec(std::forward<U0>(_0) , std::forward<U1>(_1) , std::forward<U2>(_2) , std::forward<U3>(_3) , std::forward<U4>(_4) , std::forward<U5>(_5) , std::forward<U6>(_6) , std::forward<U7>(_7) , std::forward<U8>(_8) , std::forward<U9>(_9) , std::forward<U10>(_10) , std::forward<U11>(_11) , std::forward<U12>(_12) , std::forward<U13>(_13) , std::forward<U14>(_14) , std::forward<U15>(_15) , std::forward<U16>(_16) , std::forward<U17>(_17) , std::forward<U18>(_18) , std::forward<U19>(_19) , std::forward<U20>(_20) , std::forward<U21>(_21) , std::forward<U22>(_22) , std::forward<U23>(_23) , std::forward<U24>(_24) , std::forward<U25>(_25) , std::forward<U26>(_26) , std::forward<U27>(_27) , std::forward<U28>(_28) , std::forward<U29>(_29) , std::forward<U30>(_30) , std::forward<U31>(_31) , std::forward<U32>(_32) , std::forward<U33>(_33) , std::forward<U34>(_34) , std::forward<U35>(_35) , std::forward<U36>(_36)) {}
# endif
    BOOST_FUSION_GPU_ENABLED
    vector(typename detail::call_param<T0 >::type _0 , typename detail::call_param<T1 >::type _1 , typename detail::call_param<T2 >::type _2 , typename detail::call_param<T3 >::type _3 , typename detail::call_param<T4 >::type _4 , typename detail::call_param<T5 >::type _5 , typename detail::call_param<T6 >::type _6 , typename detail::call_param<T7 >::type _7 , typename detail::call_param<T8 >::type _8 , typename detail::call_param<T9 >::type _9 , typename detail::call_param<T10 >::type _10 , typename detail::call_param<T11 >::type _11 , typename detail::call_param<T12 >::type _12 , typename detail::call_param<T13 >::type _13 , typename detail::call_param<T14 >::type _14 , typename detail::call_param<T15 >::type _15 , typename detail::call_param<T16 >::type _16 , typename detail::call_param<T17 >::type _17 , typename detail::call_param<T18 >::type _18 , typename detail::call_param<T19 >::type _19 , typename detail::call_param<T20 >::type _20 , typename detail::call_param<T21 >::type _21 , typename detail::call_param<T22 >::type _22 , typename detail::call_param<T23 >::type _23 , typename detail::call_param<T24 >::type _24 , typename detail::call_param<T25 >::type _25 , typename detail::call_param<T26 >::type _26 , typename detail::call_param<T27 >::type _27 , typename detail::call_param<T28 >::type _28 , typename detail::call_param<T29 >::type _29 , typename detail::call_param<T30 >::type _30 , typename detail::call_param<T31 >::type _31 , typename detail::call_param<T32 >::type _32 , typename detail::call_param<T33 >::type _33 , typename detail::call_param<T34 >::type _34 , typename detail::call_param<T35 >::type _35 , typename detail::call_param<T36 >::type _36 , typename detail::call_param<T37 >::type _37)
        : vec(_0 , _1 , _2 , _3 , _4 , _5 , _6 , _7 , _8 , _9 , _10 , _11 , _12 , _13 , _14 , _15 , _16 , _17 , _18 , _19 , _20 , _21 , _22 , _23 , _24 , _25 , _26 , _27 , _28 , _29 , _30 , _31 , _32 , _33 , _34 , _35 , _36 , _37) {}
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
    template <typename U0 , typename U1 , typename U2 , typename U3 , typename U4 , typename U5 , typename U6 , typename U7 , typename U8 , typename U9 , typename U10 , typename U11 , typename U12 , typename U13 , typename U14 , typename U15 , typename U16 , typename U17 , typename U18 , typename U19 , typename U20 , typename U21 , typename U22 , typename U23 , typename U24 , typename U25 , typename U26 , typename U27 , typename U28 , typename U29 , typename U30 , typename U31 , typename U32 , typename U33 , typename U34 , typename U35 , typename U36 , typename U37>
    BOOST_FUSION_GPU_ENABLED
    vector(U0 && _0 , U1 && _1 , U2 && _2 , U3 && _3 , U4 && _4 , U5 && _5 , U6 && _6 , U7 && _7 , U8 && _8 , U9 && _9 , U10 && _10 , U11 && _11 , U12 && _12 , U13 && _13 , U14 && _14 , U15 && _15 , U16 && _16 , U17 && _17 , U18 && _18 , U19 && _19 , U20 && _20 , U21 && _21 , U22 && _22 , U23 && _23 , U24 && _24 , U25 && _25 , U26 && _26 , U27 && _27 , U28 && _28 , U29 && _29 , U30 && _30 , U31 && _31 , U32 && _32 , U33 && _33 , U34 && _34 , U35 && _35 , U36 && _36 , U37 && _37)
        : vec(std::forward<U0>(_0) , std::forward<U1>(_1) , std::forward<U2>(_2) , std::forward<U3>(_3) , std::forward<U4>(_4) , std::forward<U5>(_5) , std::forward<U6>(_6) , std::forward<U7>(_7) , std::forward<U8>(_8) , std::forward<U9>(_9) , std::forward<U10>(_10) , std::forward<U11>(_11) , std::forward<U12>(_12) , std::forward<U13>(_13) , std::forward<U14>(_14) , std::forward<U15>(_15) , std::forward<U16>(_16) , std::forward<U17>(_17) , std::forward<U18>(_18) , std::forward<U19>(_19) , std::forward<U20>(_20) , std::forward<U21>(_21) , std::forward<U22>(_22) , std::forward<U23>(_23) , std::forward<U24>(_24) , std::forward<U25>(_25) , std::forward<U26>(_26) , std::forward<U27>(_27) , std::forward<U28>(_28) , std::forward<U29>(_29) , std::forward<U30>(_30) , std::forward<U31>(_31) , std::forward<U32>(_32) , std::forward<U33>(_33) , std::forward<U34>(_34) , std::forward<U35>(_35) , std::forward<U36>(_36) , std::forward<U37>(_37)) {}
# endif
    BOOST_FUSION_GPU_ENABLED
    vector(typename detail::call_param<T0 >::type _0 , typename detail::call_param<T1 >::type _1 , typename detail::call_param<T2 >::type _2 , typename detail::call_param<T3 >::type _3 , typename detail::call_param<T4 >::type _4 , typename detail::call_param<T5 >::type _5 , typename detail::call_param<T6 >::type _6 , typename detail::call_param<T7 >::type _7 , typename detail::call_param<T8 >::type _8 , typename detail::call_param<T9 >::type _9 , typename detail::call_param<T10 >::type _10 , typename detail::call_param<T11 >::type _11 , typename detail::call_param<T12 >::type _12 , typename detail::call_param<T13 >::type _13 , typename detail::call_param<T14 >::type _14 , typename detail::call_param<T15 >::type _15 , typename detail::call_param<T16 >::type _16 , typename detail::call_param<T17 >::type _17 , typename detail::call_param<T18 >::type _18 , typename detail::call_param<T19 >::type _19 , typename detail::call_param<T20 >::type _20 , typename detail::call_param<T21 >::type _21 , typename detail::call_param<T22 >::type _22 , typename detail::call_param<T23 >::type _23 , typename detail::call_param<T24 >::type _24 , typename detail::call_param<T25 >::type _25 , typename detail::call_param<T26 >::type _26 , typename detail::call_param<T27 >::type _27 , typename detail::call_param<T28 >::type _28 , typename detail::call_param<T29 >::type _29 , typename detail::call_param<T30 >::type _30 , typename detail::call_param<T31 >::type _31 , typename detail::call_param<T32 >::type _32 , typename detail::call_param<T33 >::type _33 , typename detail::call_param<T34 >::type _34 , typename detail::call_param<T35 >::type _35 , typename detail::call_param<T36 >::type _36 , typename detail::call_param<T37 >::type _37 , typename detail::call_param<T38 >::type _38)
        : vec(_0 , _1 , _2 , _3 , _4 , _5 , _6 , _7 , _8 , _9 , _10 , _11 , _12 , _13 , _14 , _15 , _16 , _17 , _18 , _19 , _20 , _21 , _22 , _23 , _24 , _25 , _26 , _27 , _28 , _29 , _30 , _31 , _32 , _33 , _34 , _35 , _36 , _37 , _38) {}
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
    template <typename U0 , typename U1 , typename U2 , typename U3 , typename U4 , typename U5 , typename U6 , typename U7 , typename U8 , typename U9 , typename U10 , typename U11 , typename U12 , typename U13 , typename U14 , typename U15 , typename U16 , typename U17 , typename U18 , typename U19 , typename U20 , typename U21 , typename U22 , typename U23 , typename U24 , typename U25 , typename U26 , typename U27 , typename U28 , typename U29 , typename U30 , typename U31 , typename U32 , typename U33 , typename U34 , typename U35 , typename U36 , typename U37 , typename U38>
    BOOST_FUSION_GPU_ENABLED
    vector(U0 && _0 , U1 && _1 , U2 && _2 , U3 && _3 , U4 && _4 , U5 && _5 , U6 && _6 , U7 && _7 , U8 && _8 , U9 && _9 , U10 && _10 , U11 && _11 , U12 && _12 , U13 && _13 , U14 && _14 , U15 && _15 , U16 && _16 , U17 && _17 , U18 && _18 , U19 && _19 , U20 && _20 , U21 && _21 , U22 && _22 , U23 && _23 , U24 && _24 , U25 && _25 , U26 && _26 , U27 && _27 , U28 && _28 , U29 && _29 , U30 && _30 , U31 && _31 , U32 && _32 , U33 && _33 , U34 && _34 , U35 && _35 , U36 && _36 , U37 && _37 , U38 && _38)
        : vec(std::forward<U0>(_0) , std::forward<U1>(_1) , std::forward<U2>(_2) , std::forward<U3>(_3) , std::forward<U4>(_4) , std::forward<U5>(_5) , std::forward<U6>(_6) , std::forward<U7>(_7) , std::forward<U8>(_8) , std::forward<U9>(_9) , std::forward<U10>(_10) , std::forward<U11>(_11) , std::forward<U12>(_12) , std::forward<U13>(_13) , std::forward<U14>(_14) , std::forward<U15>(_15) , std::forward<U16>(_16) , std::forward<U17>(_17) , std::forward<U18>(_18) , std::forward<U19>(_19) , std::forward<U20>(_20) , std::forward<U21>(_21) , std::forward<U22>(_22) , std::forward<U23>(_23) , std::forward<U24>(_24) , std::forward<U25>(_25) , std::forward<U26>(_26) , std::forward<U27>(_27) , std::forward<U28>(_28) , std::forward<U29>(_29) , std::forward<U30>(_30) , std::forward<U31>(_31) , std::forward<U32>(_32) , std::forward<U33>(_33) , std::forward<U34>(_34) , std::forward<U35>(_35) , std::forward<U36>(_36) , std::forward<U37>(_37) , std::forward<U38>(_38)) {}
# endif
    BOOST_FUSION_GPU_ENABLED
    vector(typename detail::call_param<T0 >::type _0 , typename detail::call_param<T1 >::type _1 , typename detail::call_param<T2 >::type _2 , typename detail::call_param<T3 >::type _3 , typename detail::call_param<T4 >::type _4 , typename detail::call_param<T5 >::type _5 , typename detail::call_param<T6 >::type _6 , typename detail::call_param<T7 >::type _7 , typename detail::call_param<T8 >::type _8 , typename detail::call_param<T9 >::type _9 , typename detail::call_param<T10 >::type _10 , typename detail::call_param<T11 >::type _11 , typename detail::call_param<T12 >::type _12 , typename detail::call_param<T13 >::type _13 , typename detail::call_param<T14 >::type _14 , typename detail::call_param<T15 >::type _15 , typename detail::call_param<T16 >::type _16 , typename detail::call_param<T17 >::type _17 , typename detail::call_param<T18 >::type _18 , typename detail::call_param<T19 >::type _19 , typename detail::call_param<T20 >::type _20 , typename detail::call_param<T21 >::type _21 , typename detail::call_param<T22 >::type _22 , typename detail::call_param<T23 >::type _23 , typename detail::call_param<T24 >::type _24 , typename detail::call_param<T25 >::type _25 , typename detail::call_param<T26 >::type _26 , typename detail::call_param<T27 >::type _27 , typename detail::call_param<T28 >::type _28 , typename detail::call_param<T29 >::type _29 , typename detail::call_param<T30 >::type _30 , typename detail::call_param<T31 >::type _31 , typename detail::call_param<T32 >::type _32 , typename detail::call_param<T33 >::type _33 , typename detail::call_param<T34 >::type _34 , typename detail::call_param<T35 >::type _35 , typename detail::call_param<T36 >::type _36 , typename detail::call_param<T37 >::type _37 , typename detail::call_param<T38 >::type _38 , typename detail::call_param<T39 >::type _39)
        : vec(_0 , _1 , _2 , _3 , _4 , _5 , _6 , _7 , _8 , _9 , _10 , _11 , _12 , _13 , _14 , _15 , _16 , _17 , _18 , _19 , _20 , _21 , _22 , _23 , _24 , _25 , _26 , _27 , _28 , _29 , _30 , _31 , _32 , _33 , _34 , _35 , _36 , _37 , _38 , _39) {}
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
    template <typename U0 , typename U1 , typename U2 , typename U3 , typename U4 , typename U5 , typename U6 , typename U7 , typename U8 , typename U9 , typename U10 , typename U11 , typename U12 , typename U13 , typename U14 , typename U15 , typename U16 , typename U17 , typename U18 , typename U19 , typename U20 , typename U21 , typename U22 , typename U23 , typename U24 , typename U25 , typename U26 , typename U27 , typename U28 , typename U29 , typename U30 , typename U31 , typename U32 , typename U33 , typename U34 , typename U35 , typename U36 , typename U37 , typename U38 , typename U39>
    BOOST_FUSION_GPU_ENABLED
    vector(U0 && _0 , U1 && _1 , U2 && _2 , U3 && _3 , U4 && _4 , U5 && _5 , U6 && _6 , U7 && _7 , U8 && _8 , U9 && _9 , U10 && _10 , U11 && _11 , U12 && _12 , U13 && _13 , U14 && _14 , U15 && _15 , U16 && _16 , U17 && _17 , U18 && _18 , U19 && _19 , U20 && _20 , U21 && _21 , U22 && _22 , U23 && _23 , U24 && _24 , U25 && _25 , U26 && _26 , U27 && _27 , U28 && _28 , U29 && _29 , U30 && _30 , U31 && _31 , U32 && _32 , U33 && _33 , U34 && _34 , U35 && _35 , U36 && _36 , U37 && _37 , U38 && _38 , U39 && _39)
        : vec(std::forward<U0>(_0) , std::forward<U1>(_1) , std::forward<U2>(_2) , std::forward<U3>(_3) , std::forward<U4>(_4) , std::forward<U5>(_5) , std::forward<U6>(_6) , std::forward<U7>(_7) , std::forward<U8>(_8) , std::forward<U9>(_9) , std::forward<U10>(_10) , std::forward<U11>(_11) , std::forward<U12>(_12) , std::forward<U13>(_13) , std::forward<U14>(_14) , std::forward<U15>(_15) , std::forward<U16>(_16) , std::forward<U17>(_17) , std::forward<U18>(_18) , std::forward<U19>(_19) , std::forward<U20>(_20) , std::forward<U21>(_21) , std::forward<U22>(_22) , std::forward<U23>(_23) , std::forward<U24>(_24) , std::forward<U25>(_25) , std::forward<U26>(_26) , std::forward<U27>(_27) , std::forward<U28>(_28) , std::forward<U29>(_29) , std::forward<U30>(_30) , std::forward<U31>(_31) , std::forward<U32>(_32) , std::forward<U33>(_33) , std::forward<U34>(_34) , std::forward<U35>(_35) , std::forward<U36>(_36) , std::forward<U37>(_37) , std::forward<U38>(_38) , std::forward<U39>(_39)) {}
# endif
        template <typename U0 , typename U1 , typename U2 , typename U3 , typename U4 , typename U5 , typename U6 , typename U7 , typename U8 , typename U9 , typename U10 , typename U11 , typename U12 , typename U13 , typename U14 , typename U15 , typename U16 , typename U17 , typename U18 , typename U19 , typename U20 , typename U21 , typename U22 , typename U23 , typename U24 , typename U25 , typename U26 , typename U27 , typename U28 , typename U29 , typename U30 , typename U31 , typename U32 , typename U33 , typename U34 , typename U35 , typename U36 , typename U37 , typename U38 , typename U39>
        BOOST_FUSION_GPU_ENABLED
        vector&
        operator=(vector<U0 , U1 , U2 , U3 , U4 , U5 , U6 , U7 , U8 , U9 , U10 , U11 , U12 , U13 , U14 , U15 , U16 , U17 , U18 , U19 , U20 , U21 , U22 , U23 , U24 , U25 , U26 , U27 , U28 , U29 , U30 , U31 , U32 , U33 , U34 , U35 , U36 , U37 , U38 , U39> const& rhs)
        {
            vec = rhs.vec;
            return *this;
        }
        template <typename T>
        BOOST_FUSION_GPU_ENABLED
        vector&
        operator=(T const& rhs)
        {
            vec = rhs;
            return *this;
        }
        BOOST_FUSION_GPU_ENABLED
        vector&
        operator=(vector const& rhs)
        {
            vec = rhs.vec;
            return *this;
        }
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
        BOOST_FUSION_GPU_ENABLED
        vector(vector&& rhs)
            : vec(std::forward<vector_n>(rhs.vec)) {}
        BOOST_FUSION_GPU_ENABLED
        vector&
        operator=(vector&& rhs)
        {
            vec = std::forward<vector_n>(rhs.vec);
            return *this;
        }
        template <typename T>
        BOOST_FUSION_GPU_ENABLED
        vector&
        operator=(T&& rhs)
        {
            vec = std::forward<T>(rhs);
            return *this;
        }
# endif
        template <int N>
        BOOST_FUSION_GPU_ENABLED
        typename add_reference<
            typename mpl::at_c<types, N>::type
        >::type
        at_impl(mpl::int_<N> index)
        {
            return vec.at_impl(index);
        }
        template <int N>
        BOOST_FUSION_GPU_ENABLED
        typename add_reference<
            typename add_const<
                typename mpl::at_c<types, N>::type
            >::type
        >::type
        at_impl(mpl::int_<N> index) const
        {
            return vec.at_impl(index);
        }
        template <typename I>
        BOOST_FUSION_GPU_ENABLED
        typename add_reference<
            typename mpl::at<types, I>::type
        >::type
        at_impl(I )
        {
            return vec.at_impl(mpl::int_<I::value>());
        }
        template<typename I>
        BOOST_FUSION_GPU_ENABLED
        typename add_reference<
            typename add_const<
                typename mpl::at<types, I>::type
            >::type
        >::type
        at_impl(I ) const
        {
            return vec.at_impl(mpl::int_<I::value>());
        }
    private:
        BOOST_FUSION_VECTOR_CTOR_HELPER()
        vector_n vec;
    };
}}
