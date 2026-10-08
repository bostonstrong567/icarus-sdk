// /Script/AdvancedSessions.BPOnlineUser
// size 0x40, declared in Icarus/Plugins/AdvancedSessions/Source/AdvancedSessions/Classes/BlueprintDataDefinitions.h

USTRUCT()
struct FBPOnlineUser
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBPUniqueNetId UniqueNetId;  // 0x0000, size 0x20
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString DisplayName;  // 0x0020, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString RealName;  // 0x0030, size 0x10
};
