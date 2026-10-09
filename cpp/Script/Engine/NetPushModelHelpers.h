// /Script/Engine.NetPushModelHelpers
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Engine/Source/Runtime/Engine/Public/Net/NetPushModelHelpers.h

UCLASS()
class UNetPushModelHelpers : public UBlueprintFunctionLibrary
{
public:
    UFUNCTION(BlueprintCallable) static void MarkPropertyDirty(UObject* Object, FName PropertyName);  // parameters 0x10
    UFUNCTION(BlueprintCallable) static void MarkPropertyDirtyFromRepIndex(UObject* Object, int32 RepIndex, FName PropertyName);  // parameters 0x14
};
