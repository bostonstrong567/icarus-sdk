// /Script/Engine.BroadphaseSettings
// size 0x40, declared in Engine/Source/Runtime/Engine/Classes/GameFramework/WorldSettings.h

USTRUCT()
struct FBroadphaseSettings
{
    UPROPERTY(EditAnywhere) bool bUseMBPOnClient;  // 0x0000, size 0x1
    UPROPERTY(EditAnywhere) bool bUseMBPOnServer;  // 0x0001, size 0x1
    UPROPERTY(EditAnywhere) bool bUseMBPOuterBounds;  // 0x0002, size 0x1
    UPROPERTY(EditAnywhere) FBox MBPBounds;  // 0x0004, size 0x1C
    UPROPERTY(EditAnywhere) FBox MBPOuterBounds;  // 0x0020, size 0x1C
    UPROPERTY(EditAnywhere) uint32 MBPNumSubdivs;  // 0x003C, size 0x4
};
