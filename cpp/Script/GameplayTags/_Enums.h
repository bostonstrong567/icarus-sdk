// /Script/GameplayTags.EGameplayContainerMatchType
UENUM()
enum class EGameplayContainerMatchType : uint8
{
    Any = 0,
    All = 1,
};

// /Script/GameplayTags.EGameplayTagMatchType
UENUM()
enum class EGameplayTagMatchType : int32
{
    Explicit = 0,
    IncludeParentTags = 1,
};

// /Script/GameplayTags.EGameplayTagQueryExprType
UENUM()
enum class EGameplayTagQueryExprType : int32
{
    Undefined = 0,
    AnyTagsMatch = 1,
    AllTagsMatch = 2,
    NoTagsMatch = 3,
    AnyExprMatch = 4,
    AllExprMatch = 5,
    NoExprMatch = 6,
};

// /Script/GameplayTags.EGameplayTagSelectionType
UENUM()
enum class EGameplayTagSelectionType : uint8
{
    None = 0,
    NonRestrictedOnly = 1,
    RestrictedOnly = 2,
    All = 3,
};

// /Script/GameplayTags.EGameplayTagSourceType
UENUM()
enum class EGameplayTagSourceType : uint8
{
    Native = 0,
    DefaultTagList = 1,
    TagList = 2,
    RestrictedTagList = 3,
    DataTable = 4,
    Invalid = 5,
};
