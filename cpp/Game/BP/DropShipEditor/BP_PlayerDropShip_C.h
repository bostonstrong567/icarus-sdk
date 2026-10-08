// /Game/BP/DropShipEditor/BP_PlayerDropShip.BP_PlayerDropShip_C
// Derives from: AIcarusRocket > AIcarusActor > AActor > UObject
// size 0x37D, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_PlayerDropShip_C : public AIcarusRocket
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0318, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHighlightableComponent* Highlightable;  // 0x0320, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UInteractableComponent* Interactable;  // 0x0328, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0330, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) ABP_IcarusPlayerControllerSurvival_C* AssignedPlayer;  // 0x0338, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<ABP_DropshipSeat_C*> Seats;  // 0x0340, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<ABP_PartBase_C*> HighlightComponents;  // 0x0350, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_DropshipSeat_C* SeatToEnter;  // 0x0360, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Seated;  // 0x0368, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DestinationHeight;  // 0x036C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LandHeightThreshold;  // 0x0370, size 0x4
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) bool Descend;  // 0x0374, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float InitialPositionOffset_0;  // 0x0378, size 0x4
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) bool Land;  // 0x037C, size 0x1

    UFUNCTION(BlueprintCallable, Server, Reliable) void Build_Default();  // named "Build Default"
    UFUNCTION(BlueprintCallable) void CalculateLandingVelocity(float Delta, FVector& Velocity, float& RangeDelta);  // parameters 0x14
    UFUNCTION(BlueprintCallable) void EnterSeat(ABP_DropshipSeat_C* DropShipSeat);  // parameters 0x8
    UFUNCTION() void ExecuteUbergraph_BP_PlayerDropShip(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnRocketAssembled();
    UFUNCTION(BlueprintCallable) void OnWorldInteraction(UInteractableComponent* Interactable, AActor* Instigator, const FHitResult& HitResult);  // parameters 0x98
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Start();
    UFUNCTION(BlueprintCallable) void UpdateHighlight(ABP_PartBase_C* Part, bool State);  // parameters 0x9
};
