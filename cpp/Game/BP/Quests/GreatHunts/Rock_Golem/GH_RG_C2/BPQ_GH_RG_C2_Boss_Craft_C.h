// /Game/BP/Quests/GreatHunts/Rock_Golem/GH_RG_C2/BPQ_GH_RG_C2_Boss_Craft.BPQ_GH_RG_C2_Boss_Craft_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x470, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_GH_RG_C2_Boss_Craft_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0468, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION(BlueprintCallable) void CustomEvent_0(AActor* Player, AActor* Device, FProcessorRecipesRowHandle Recipe);  // parameters 0x28
    UFUNCTION() void ExecuteUbergraph_BPQ_GH_RG_C2_Boss_Craft(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
