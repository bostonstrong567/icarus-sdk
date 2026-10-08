// /Script/LiveLink.ELiveLinkAxis
UENUM()
enum class ELiveLinkAxis : uint8
{
    X = 0,
    Y = 1,
    Z = 2,
    XNeg = 3,
    YNeg = 4,
    ZNeg = 5,
};

// /Script/LiveLink.ELiveLinkTimecodeProviderEvaluationType
UENUM()
enum class ELiveLinkTimecodeProviderEvaluationType : int32
{
    Lerp = 0,
    Nearest = 1,
    Latest = 2,
};
