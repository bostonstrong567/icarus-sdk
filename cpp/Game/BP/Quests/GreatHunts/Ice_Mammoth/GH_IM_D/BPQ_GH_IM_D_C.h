// /Game/BP/Quests/GreatHunts/Ice_Mammoth/GH_IM_D/BPQ_GH_IM_D.BPQ_GH_IM_D_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x4A0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_GH_IM_D_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0468, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FVector> Locations;  // 0x0470, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle Timer;  // 0x0480, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<ABP_Building_Base_C*> Buildings;  // 0x0488, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UFMODEvent* Event;  // 0x0498, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BPQ_GH_IM_D(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnReady(APrebuiltStructure* Structure);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void ReceiveQuestEnded(bool bWasAbandoned);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void RunFlow();
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
