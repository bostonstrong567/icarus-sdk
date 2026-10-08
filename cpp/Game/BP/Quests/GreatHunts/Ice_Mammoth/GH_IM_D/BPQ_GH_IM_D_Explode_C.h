// /Game/BP/Quests/GreatHunts/Ice_Mammoth/GH_IM_D/BPQ_GH_IM_D_Explode.BPQ_GH_IM_D_Explode_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x524, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_GH_IM_D_Explode_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0468, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<AActor*> Spawned_Actors;  // 0x0470, size 0x10, named "Spawned Actors"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle Timer;  // 0x0480, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UFMODEvent* Event;  // 0x0488, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<AActor*> Buildings;  // 0x0490, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* CurrentActor;  // 0x04A0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<AActor*> Splines;  // 0x04A8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* Spline;  // 0x04B8, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) float RemainingTime;  // 0x04C0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_Mission_Orbital_Lazer_C* LazerRef;  // 0x04C8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* SpawnedMammoth;  // 0x04D0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* ArenaTarget;  // 0x04D8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<AActor*> ToDestroy;  // 0x04E0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTransform RubbleTransform;  // 0x04F0, size 0x30
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MagicNumberTime;  // 0x0520, size 0x4

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BPQ_GH_IM_D_Explode(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FadeOutBuildings();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void GetDescription(const FText& InDescription, FText& OutDescription, bool& bOutComplete);  // parameters 0x31
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetExplosionLocation(FVector& Location);  // parameters 0xC
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void MULTI_ExplodeAtLocation(FVector_NetQuantize Location);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void OnActorDamaged(AActor* DamagedActor);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void ReceiveQuestEnded(bool bWasAbandoned);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void RubblePile();
    UFUNCTION(BlueprintImplementableEvent) void RunOperations(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SpawnMammoth();
    UFUNCTION(BlueprintCallable) void StartDestroy();
    UFUNCTION(BlueprintCallable) void TriggerExplosion(FVector Location);  // parameters 0xC
};
