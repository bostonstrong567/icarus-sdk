// /Script/IcarusGenerated.ReqUpdateCharacterProspectLocation
// size 0x28, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/OnlineSubsystemIcarus/UpdateCharacterProspectLocationCallbackProxyGen.generated.h

USTRUCT()
struct FReqUpdateCharacterProspectLocation
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString ProspectID;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString UserID;  // 0x0010, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 ChrSlot;  // 0x0020, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EProspectLocation Location;  // 0x0024, size 0x1
};
