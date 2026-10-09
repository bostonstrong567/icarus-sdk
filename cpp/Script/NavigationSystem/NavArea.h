// /Script/NavigationSystem.NavArea
// Derives from: UNavAreaBase > UObject
// size 0x48, declared in Engine/Source/Runtime/NavigationSystem/Public/NavAreas/NavArea.h

UCLASS(Abstract, Config=Engine)
class UNavArea : public UNavAreaBase
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(EditAnywhere, Config) float DefaultCost;  // 0x0030, size 0x4
    UPROPERTY(EditAnywhere, Config) FColor DrawColor;  // 0x0038, size 0x4
    UPROPERTY(EditAnywhere, Config) FNavAgentSelector SupportedAgents;  // 0x003C, size 0x4
    uint32 SupportedAgentsBits;  // 0x0040, not reflected
    UPROPERTY(Config) uint8 bSupportsAgent0 : 1;  // 0x0040, mask 0x01
    UPROPERTY(Config) uint8 bSupportsAgent1 : 1;  // 0x0040, mask 0x02
    UPROPERTY(Config) uint8 bSupportsAgent2 : 1;  // 0x0040, mask 0x04
    UPROPERTY(Config) uint8 bSupportsAgent3 : 1;  // 0x0040, mask 0x08
    UPROPERTY(Config) uint8 bSupportsAgent4 : 1;  // 0x0040, mask 0x10
    UPROPERTY(Config) uint8 bSupportsAgent5 : 1;  // 0x0040, mask 0x20
    UPROPERTY(Config) uint8 bSupportsAgent6 : 1;  // 0x0040, mask 0x40
    UPROPERTY(Config) uint8 bSupportsAgent7 : 1;  // 0x0040, mask 0x80
    UPROPERTY(Config) uint8 bSupportsAgent8 : 1;  // 0x0041, mask 0x01
    UPROPERTY(Config) uint8 bSupportsAgent9 : 1;  // 0x0041, mask 0x02
    UPROPERTY(Config) uint8 bSupportsAgent10 : 1;  // 0x0041, mask 0x04
    UPROPERTY(Config) uint8 bSupportsAgent11 : 1;  // 0x0041, mask 0x08
    UPROPERTY(Config) uint8 bSupportsAgent12 : 1;  // 0x0041, mask 0x10
    UPROPERTY(Config) uint8 bSupportsAgent13 : 1;  // 0x0041, mask 0x20
    UPROPERTY(Config) uint8 bSupportsAgent14 : 1;  // 0x0041, mask 0x40
    UPROPERTY(Config) uint8 bSupportsAgent15 : 1;  // 0x0041, mask 0x80
protected:
    UPROPERTY(EditAnywhere, Config) float FixedAreaEnteringCost;  // 0x0034, size 0x4
    uint16 AreaFlags;  // 0x0044, not reflected

    // Virtual functions that start here:
    //   CopyFrom, GetFixedAreaEnteringCost, InitializeArea
};
