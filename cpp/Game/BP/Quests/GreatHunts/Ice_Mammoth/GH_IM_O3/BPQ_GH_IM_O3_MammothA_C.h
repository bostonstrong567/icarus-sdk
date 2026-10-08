// /Game/BP/Quests/GreatHunts/Ice_Mammoth/GH_IM_O3/BPQ_GH_IM_O3_MammothA.BPQ_GH_IM_O3_MammothA_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x4A8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_GH_IM_O3_MammothA_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBPC_RecoveryBeacon_C* BPC_RecoveryBeacon;  // 0x0468, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USphereComponent* Sphere;  // 0x0470, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FDialogueRowHandle Dialogue;  // 0x0478, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* Spawned_AI;  // 0x0490, size 0x8, named "Spawned AI"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<AIcarusPlayerCharacter*> Players;  // 0x0498, size 0x10

    UFUNCTION() void BndEvt__BPQ_GH_IM_B_LocationA_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);  // parameters 0xA8
    UFUNCTION() void BndEvt__BPQ_GH_IM_O1_Researchers_3_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) void CharacterCheck(UObject* Object, AIcarusPlayerCharacter*& AsIcarus_Player_Character);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BPQ_GH_IM_O3_MammothA(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetTarget(AActor*& Player);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void MammothKilled();
    UFUNCTION(BlueprintCallable) void OnAISpawned(AActor* SpawnedAI);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void RunFlow();
    UFUNCTION(BlueprintImplementableEvent) void RunOperations(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void TriggerAttack();
};
