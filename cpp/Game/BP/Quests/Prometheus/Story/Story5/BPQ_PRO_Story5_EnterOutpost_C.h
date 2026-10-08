// /Game/BP/Quests/Prometheus/Story/Story5/BPQ_PRO_Story5_EnterOutpost.BPQ_PRO_Story5_EnterOutpost_C
// Derives from: ABPQ_Travel_C > AQuest > AIcarusActor > AActor > UObject
// size 0x4B0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_PRO_Story5_EnterOutpost_C : public ABPQ_Travel_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0480, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBPQC_AnimalSwarm_C* BPQC_AnimalSwarm;  // 0x0488, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USphereComponent* LargerAreaForAnimalSpawn;  // 0x0490, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FDialogueRowHandle Dialogue;  // 0x0498, size 0x18

    UFUNCTION(BlueprintCallable) void AI_Move_To_Nearest_Landmine();  // named "AI Move To Nearest Landmine"
    UFUNCTION() void BndEvt__BPQ_PRO_Story5_EnterOutpost_LargerAreaForAnimalSpawn_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);  // parameters 0xA8
    UFUNCTION() void ExecuteUbergraph_BPQ_PRO_Story5_EnterOutpost(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void MineDestroyed(AActor* DestroyedActor);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void RunOperations(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void Takes_damage_from_landmine(AActor* DamagedActor, float Damage, UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);  // parameters 0x28, named "Takes damage from landmine"
};
