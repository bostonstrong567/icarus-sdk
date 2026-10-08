// /Game/BP/World/Effects/BP_PoisonSpot.BP_PoisonSpot_C
// Derives from: AIcarusActor > AActor > UObject
// size 0x305, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_PoisonSpot_C : public AIcarusActor
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_Hammerhead_PoisonSpot;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UDecalComponent* Decal;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBoxComponent* Box;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x02E0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Edge_Taper;  // 0x02E8, size 0x4, named "Edge Taper"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FlowSpeed;  // 0x02EC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Base_to_Flowing;  // 0x02F0, size 0x4, named "Base to Flowing"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Dryness;  // 0x02F4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Base_to_Patchy;  // 0x02F8, size 0x4, named "Base to Patchy"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float EdgeTaper;  // 0x02FC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float EdgeNoise;  // 0x0300, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsBubbling;  // 0x0304, size 0x1

    UFUNCTION() void BndEvt__BP_PoisonSpot_Box_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);  // parameters 0xA8
    UFUNCTION() void ExecuteUbergraph_BP_PoisonSpot(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
};
