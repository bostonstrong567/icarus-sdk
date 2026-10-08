// /Script/Engine.MicroTransactionBase
// Derives from: UPlatformInterfaceBase > UObject
// size 0x68, declared in Engine/Source/Runtime/Engine/Classes/Engine/MicroTransactionBase.h

UCLASS(Transient)
class UMicroTransactionBase : public UPlatformInterfaceBase
{
public:
    UPROPERTY() TArray<FPurchaseInfo> AvailableProducts;  // 0x0038, size 0x10
    UPROPERTY() FString LastError;  // 0x0048, size 0x10
    UPROPERTY() FString LastErrorSolution;  // 0x0058, size 0x10

    // Virtual functions that start here:
    //   BeginPurchase, Init, IsAllowedToMakePurchases, QueryForAvailablePurchases
};
