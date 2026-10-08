// /Script/IcarusGenerated.ReqModifyDropship
// size 0x40, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/OnlineSubsystemIcarus/ModifyDropshipCallbackProxyGen.generated.h

USTRUCT()
struct FReqModifyDropship
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString UserID;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 DropshipID;  // 0x0010, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FDropshipModification Dropship;  // 0x0018, size 0x28
};
