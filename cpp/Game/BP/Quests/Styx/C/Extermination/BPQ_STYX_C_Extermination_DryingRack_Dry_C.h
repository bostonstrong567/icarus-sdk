// /Game/BP/Quests/Styx/C/Extermination/BPQ_STYX_C_Extermination_DryingRack_Dry.BPQ_STYX_C_Extermination_DryingRack_Dry_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x470, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_STYX_C_Extermination_DryingRack_Dry_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0468, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BPQ_STYX_C_Extermination_DryingRack_Dry(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) bool FindDriedMeat();  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void RunOperations(float DeltaSeconds);  // parameters 0x4
};
