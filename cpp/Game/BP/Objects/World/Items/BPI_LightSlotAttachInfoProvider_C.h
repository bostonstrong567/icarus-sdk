// /Game/BP/Objects/World/Items/BPI_LightSlotAttachInfoProvider.BPI_LightSlotAttachInfoProvider_C
// Derives from: UInterface > UObject
// size 0x28, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBPI_LightSlotAttachInfoProvider_C : public UInterface
{
public:
    UFUNCTION(BlueprintCallable) void GetAttachmentOffset(FTransform& ThirdPersonActorOffset, FTransform& FirstPersonActorOffset, FVector& ThirdPersonComponentOffset);  // parameters 0x6C
    UFUNCTION(BlueprintCallable) void GetComponentToOffset(USceneComponent*& Component);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void GetLightSlotAttachPoint(TEnumAsByte<LightSlotAttachPoint>& AttachPoint);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void GetThirdPersonOnlyComponents(TArray<UPrimitiveComponent*>& OutComponents);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void UpdateCurrentOffset(FVector NewOffset);  // parameters 0xC
};
