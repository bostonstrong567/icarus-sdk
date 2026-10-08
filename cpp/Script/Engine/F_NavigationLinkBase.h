// /Script/Engine.NavigationLinkBase
// size 0x30, declared in Engine/Source/Runtime/Engine/Classes/AI/Navigation/NavLinkDefinition.h

USTRUCT()
struct FNavigationLinkBase
{
    UPROPERTY(EditAnywhere) float LeftProjectHeight;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere) float MaxFallDownLength;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere) float SnapRadius;  // 0x000C, size 0x4
    UPROPERTY(EditAnywhere) float SnapHeight;  // 0x0010, size 0x4
    UPROPERTY(EditAnywhere) FNavAgentSelector SupportedAgents;  // 0x0014, size 0x4
    UPROPERTY() uint8 bSupportsAgent0 : 1;  // 0x0018, mask 0x01
    UPROPERTY() uint8 bSupportsAgent1 : 1;  // 0x0018, mask 0x02
    UPROPERTY() uint8 bSupportsAgent2 : 1;  // 0x0018, mask 0x04
    UPROPERTY() uint8 bSupportsAgent3 : 1;  // 0x0018, mask 0x08
    UPROPERTY() uint8 bSupportsAgent4 : 1;  // 0x0018, mask 0x10
    UPROPERTY() uint8 bSupportsAgent5 : 1;  // 0x0018, mask 0x20
    UPROPERTY() uint8 bSupportsAgent6 : 1;  // 0x0018, mask 0x40
    UPROPERTY() uint8 bSupportsAgent7 : 1;  // 0x0018, mask 0x80
    UPROPERTY() uint8 bSupportsAgent8 : 1;  // 0x0019, mask 0x01
    UPROPERTY() uint8 bSupportsAgent9 : 1;  // 0x0019, mask 0x02
    UPROPERTY() uint8 bSupportsAgent10 : 1;  // 0x0019, mask 0x04
    UPROPERTY() uint8 bSupportsAgent11 : 1;  // 0x0019, mask 0x08
    UPROPERTY() uint8 bSupportsAgent12 : 1;  // 0x0019, mask 0x10
    UPROPERTY() uint8 bSupportsAgent13 : 1;  // 0x0019, mask 0x20
    UPROPERTY() uint8 bSupportsAgent14 : 1;  // 0x0019, mask 0x40
    UPROPERTY() uint8 bSupportsAgent15 : 1;  // 0x0019, mask 0x80
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<ENavLinkDirection> Direction;  // 0x001C, size 0x1
    UPROPERTY(EditAnywhere) uint8 bUseSnapHeight : 1;  // 0x001D, mask 0x01
    UPROPERTY(EditAnywhere) uint8 bSnapToCheapestArea : 1;  // 0x001D, mask 0x02
    UPROPERTY() uint8 bCustomFlag0 : 1;  // 0x001D, mask 0x04
    UPROPERTY() uint8 bCustomFlag1 : 1;  // 0x001D, mask 0x08
    UPROPERTY() uint8 bCustomFlag2 : 1;  // 0x001D, mask 0x10
    UPROPERTY() uint8 bCustomFlag3 : 1;  // 0x001D, mask 0x20
    UPROPERTY() uint8 bCustomFlag4 : 1;  // 0x001D, mask 0x40
    UPROPERTY() uint8 bCustomFlag5 : 1;  // 0x001D, mask 0x80
    UPROPERTY() uint8 bCustomFlag6 : 1;  // 0x001E, mask 0x01
    UPROPERTY() uint8 bCustomFlag7 : 1;  // 0x001E, mask 0x02
    UPROPERTY(EditAnywhere) TSubclassOf<UNavAreaBase> AreaClass;  // 0x0020, size 0x8

    // Not reflected:
    int32 UserId;  // 0x0008
    uint32 SupportedAgentsBits;  // 0x0018
    TWeakObjectPtr<UClass,FWeakObjectPtr> AreaClassOb;  // 0x0028
};
