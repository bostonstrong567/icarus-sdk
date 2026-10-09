// /Script/OnlineSubsystem.InAppPurchaseProductRequest
// size 0x18, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/OnlineSubsystemUtils/InAppPurchaseRestoreCallbackProxy.generated.h

USTRUCT()
struct FInAppPurchaseProductRequest
{
public:
    UPROPERTY(BlueprintReadWrite) FString ProductIdentifier;  // 0x0000, size 0x10
    UPROPERTY(BlueprintReadWrite) bool bIsConsumable;  // 0x0010, size 0x1
};
