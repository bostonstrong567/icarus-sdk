// /Game/ASS/ENV/ATM/BP_BiomeTrigger.BP_BiomeTrigger_C
// Derives from: AActor > UObject
// size 0x290, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_BiomeTrigger_C : public AActor
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0220, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBoxComponent* B_Deactivate;  // 0x0228, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBoxComponent* A_Deactivate;  // 0x0230, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBoxComponent* B_Activation;  // 0x0238, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBoxComponent* A_Activation;  // 0x0240, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USplineComponent* Spline;  // 0x0248, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0250, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsInUse;  // 0x0258, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float TriggerWidth;  // 0x025C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float TriggerHeight;  // 0x0260, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* CollisionObject;  // 0x0268, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBiomesEnum Biome_A;  // 0x0270, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBiomesEnum Biome_B;  // 0x0280, size 0x10

    UFUNCTION() void BndEvt__A_Activation_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);  // parameters 0xA8
    UFUNCTION() void BndEvt__A_Deactivate_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);  // parameters 0xA8
    UFUNCTION() void BndEvt__B_Activation_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);  // parameters 0xA8
    UFUNCTION() void BndEvt__B_Deactivate_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);  // parameters 0xA8
    UFUNCTION() void ExecuteUbergraph_BP_BiomeTrigger(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetAtmosphereController(ABP_AtmosphereController_C*& AtmosphereController);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void UserConstructionScript();
};
