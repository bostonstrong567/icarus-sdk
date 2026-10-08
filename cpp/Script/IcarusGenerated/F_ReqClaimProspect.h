// /Script/IcarusGenerated.ReqClaimProspect
// size 0xC8, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/OnlineSubsystemIcarus/ClaimProspectCallbackProxyGen.generated.h

USTRUCT()
struct FReqClaimProspect
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString UserID;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 ChrSlot;  // 0x0010, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString LobbyName;  // 0x0018, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FProspectInfo Prospect;  // 0x0028, size 0xA0
};
