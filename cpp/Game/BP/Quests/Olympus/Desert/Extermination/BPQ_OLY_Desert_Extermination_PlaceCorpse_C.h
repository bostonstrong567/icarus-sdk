// /Game/BP/Quests/Olympus/Desert/Extermination/BPQ_OLY_Desert_Extermination_PlaceCorpse.BPQ_OLY_Desert_Extermination_PlaceCorpse_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x488, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_OLY_Desert_Extermination_PlaceCorpse_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USphereComponent* Sphere;  // 0x0468, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0470, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 SetIndex;  // 0x0478, size 0x4
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) ABP_GOAP_Corpse_C* FoundCorpse;  // 0x0480, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BPQ_OLY_Desert_Extermination_PlaceCorpse(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FindNearbyCorpse();
    UFUNCTION(BlueprintCallable) void OnRep_As_BP_GOAP_Corpse();  // named "OnRep_As BP GOAP Corpse"
    UFUNCTION(BlueprintImplementableEvent) void RunOperations(float DeltaSeconds);  // parameters 0x4
};
