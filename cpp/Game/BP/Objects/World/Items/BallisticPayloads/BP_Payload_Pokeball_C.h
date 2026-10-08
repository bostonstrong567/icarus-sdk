// /Game/BP/Objects/World/Items/BallisticPayloads/BP_Payload_Pokeball.BP_Payload_Pokeball_C
// Derives from: ABP_Payload_C > AIcarusPayload > AActor > UObject
// size 0x458, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Payload_Pokeball_C : public ABP_Payload_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0400, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float CaptureRadius;  // 0x0408, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusMountCharacter* MountToCapture;  // 0x0410, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ShouldCapture;  // 0x0418, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsLocalBall;  // 0x0419, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString ItemGUID;  // 0x0420, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 PowerConsumptionAmount;  // 0x0430, size 0x4
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UFillableComponent* FillableRef;  // 0x0438, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HasEnoughPower;  // 0x0440, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<AActor*> OverlappedActors;  // 0x0448, size 0x10

    UFUNCTION(BlueprintCallable, Client, Reliable) void Client_TrySerialiseMountData(AIcarusMountCharacter* CapturedMount);  // parameters 0x8
    UFUNCTION() void ExecuteUbergraph_BP_Payload_Pokeball(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable, Server, Reliable) void Server_OnReloadSuccess();
    UFUNCTION(BlueprintCallable, Server, Reliable) void Server_OnSerialiseSuccess();
    UFUNCTION(BlueprintCallable, Server, Reliable) void Server_SetShouldCaptureMount(bool ShouldCapture);  // parameters 0x1
};
