// /Game/AutomatedTesting/BP/BP_IcarusTestRail.BP_IcarusTestRail_C
// Derives from: AIcarusTestRail > ACameraRig_Rail > AActor > UObject
// size 0x2FC, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_IcarusTestRail_C : public AIcarusTestRail
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBillboardComponent* Billboard;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* AttachPoint;  // 0x02E8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_FunctionalTestSeat_C* TestSeat;  // 0x02F0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SplineDistancePerSecond;  // 0x02F8, size 0x4

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void BeginTest();
    UFUNCTION() void ExecuteUbergraph_BP_IcarusTestRail(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void SetupTest(ACharacter* InTestCharacter);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void TestComplete();
};
