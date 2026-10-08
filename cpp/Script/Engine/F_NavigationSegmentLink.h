// /Script/Engine.NavigationSegmentLink
// size 0x60, declared in Engine/Source/Runtime/Engine/Classes/AI/Navigation/NavLinkDefinition.h

USTRUCT()
struct FNavigationSegmentLink : public FNavigationLinkBase
{
    UPROPERTY(EditAnywhere) FVector LeftStart;  // 0x0030, size 0xC
    UPROPERTY(EditAnywhere) FVector LeftEnd;  // 0x003C, size 0xC
    UPROPERTY(EditAnywhere) FVector RightStart;  // 0x0048, size 0xC
    UPROPERTY(EditAnywhere) FVector RightEnd;  // 0x0054, size 0xC
};
