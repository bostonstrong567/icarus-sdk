// /Script/Icarus.SettlementNPCSkillProgress
// size 0x20, declared in Icarus/Source/Icarus/Settlement/SettlementDataStructs.h

USTRUCT()
struct FSettlementNPCSkillProgress
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSettlementNPCSkillsRowHandle Skill;  // 0x0000, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Xp;  // 0x0018, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float PassionMultiplier;  // 0x001C, size 0x4
};
