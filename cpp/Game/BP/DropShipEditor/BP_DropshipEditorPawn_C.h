// /Game/BP/DropShipEditor/BP_DropshipEditorPawn.BP_DropshipEditorPawn_C
// Derives from: ASpectatorPawn > ADefaultPawn > APawn > AActor > UObject
// size 0x2E8, a blueprint class, blueprint

UCLASS(NotPlaceable, Config=Game)
class ABP_DropshipEditorPawn_C : public ASpectatorPawn
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UPostProcessComponent* PostProcess;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCameraComponent* Camera;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USpringArmComponent* SpringArm;  // 0x02C0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float RotationSpeed;  // 0x02C8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float StoredV;  // 0x02CC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float StoredZ;  // 0x02D0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ZoomSpeed;  // 0x02D4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float StoredH;  // 0x02D8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float VerticalSpeed;  // 0x02DC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_PlayerDropShip_C* DropShip;  // 0x02E0, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_DropshipEditorPawn(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
};
