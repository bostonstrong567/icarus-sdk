// /Script/Engine.NavigationLink
// size 0x48, declared in Engine/Source/Runtime/Engine/Classes/AI/Navigation/NavLinkDefinition.h

USTRUCT()
struct FNavigationLink : public FNavigationLinkBase
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector Left;  // 0x0030, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector Right;  // 0x003C, size 0xC
};
