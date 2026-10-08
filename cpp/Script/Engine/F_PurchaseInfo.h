// /Script/Engine.PurchaseInfo
// size 0x40, declared in Engine/Source/Runtime/Engine/Classes/Engine/MicroTransactionBase.h

USTRUCT()
struct FPurchaseInfo
{
    UPROPERTY() FString Identifier;  // 0x0000, size 0x10
    UPROPERTY() FString DisplayName;  // 0x0010, size 0x10
    UPROPERTY() FString DisplayDescription;  // 0x0020, size 0x10
    UPROPERTY() FString DisplayPrice;  // 0x0030, size 0x10
};
