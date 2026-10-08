// /Script/Icarus.LoadedLevelInfo
// size 0x30, declared in Icarus/Source/Icarus/World/InstancedLevels/TeleportManagerSubSystem.h

USTRUCT()
struct FLoadedLevelInfo
{
    UPROPERTY() ULevelStreamingDynamic* LoadedDynamicLevel;  // 0x0000, size 0x8
    UPROPERTY() TArray<AIcarusPlayerCharacter*> Players;  // 0x0008, size 0x10
    UPROPERTY(Instanced) TWeakObjectPtr<UTeleportComponent> Requestor;  // 0x0018, size 0x8
    UPROPERTY() int32 PickedSlot;  // 0x0020, size 0x4
    UPROPERTY(EditAnywhere) FVector LocationToLoadLevel;  // 0x0024, size 0xC
};
