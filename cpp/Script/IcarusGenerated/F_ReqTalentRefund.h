// /Script/IcarusGenerated.ReqTalentRefund
// size 0x20, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/OnlineSubsystemIcarus/TalentRefundCallbackProxyGen.generated.h

USTRUCT()
struct FReqTalentRefund
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBackendTalent Talent;  // 0x0000, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 CharacterSlot;  // 0x0018, size 0x4
};
