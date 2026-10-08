// /Script/IcarusGenerated.ResPreparedLoadout
// size 0x50, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/OnlineSubsystemIcarus/GetPreparedLoadoutCallbackProxyGen.generated.h

USTRUCT()
struct FResPreparedLoadout
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Success;  // 0x0000, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 DropshipID;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FMetaItem Envirosuit;  // 0x0008, size 0x40
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Locked;  // 0x0048, size 0x1
};
