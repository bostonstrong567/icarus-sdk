// /Game/BP/Player/BP_SpectatorActor.BP_SpectatorActor_C
// Derives from: AActor > UObject
// size 0x260, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_SpectatorActor_C : public AActor
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0220, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USphereComponent* Sphere;  // 0x0228, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCameraComponent* Camera;  // 0x0230, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USpringArmComponent* SpringArm;  // 0x0238, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0240, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* PlayerToSpectate;  // 0x0248, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 CurrentPlayer;  // 0x0250, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxCameraDistance;  // 0x0254, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MinCameraDistance;  // 0x0258, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float HitCameraOffset;  // 0x025C, size 0x4

    UFUNCTION(BlueprintCallable) void ChangePlayer(bool Previous);  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BP_SpectatorActor(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetPlayer(int32 Index, AActor*& Item);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void GetSpectatedPlayer(AIcarusPlayerCharacterSurvival*& PlayerOut);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void NextPlayer(bool Previous);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetPlayer(AActor* Player);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void UpdateSpringArm(FRotator ControlRotation);  // parameters 0xC
};
