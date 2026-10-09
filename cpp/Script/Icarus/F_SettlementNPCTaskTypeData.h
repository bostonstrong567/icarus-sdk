// /Script/Icarus.SettlementNPCTaskTypeData
// size 0xF8, declared in Icarus/Source/Icarus/Settlement/SettlementDataStructs.h

USTRUCT()
struct FSettlementNPCTaskTypeData : public FIcarusTableRowBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText DisplayName;  // 0x0018, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText DisplayNameVerb;  // 0x0030, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UTexture2D> TaskIcon;  // 0x0048, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bDisplayProgressWidgetForTask;  // 0x0070, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bRequiresTarget;  // 0x0071, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bRequiresSource;  // 0x0072, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UBehaviorTree> Behaviour;  // 0x0078, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 Priority;  // 0x00A0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FExperienceEventsRowHandle ExperienceReward;  // 0x00A4, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<ESettlementNPCActivity> SupportedActivities;  // 0x00C0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FSettlementNPCRolesRowHandle> WhitelistedNPCRoles;  // 0x00D0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSettlementNPCSkillsRowHandle SkillCategory;  // 0x00E0, size 0x18
};
