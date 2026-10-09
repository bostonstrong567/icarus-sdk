// /Script/AndroidPermission.AndroidPermissionFunctionLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Engine/Plugins/Runtime/AndroidPermission/Source/AndroidPermission/Classes/AndroidPermissionFunctionLibrary.h

UCLASS()
class UAndroidPermissionFunctionLibrary : public UBlueprintFunctionLibrary
{
public:
    UFUNCTION(BlueprintCallable) static UAndroidPermissionCallbackProxy* AcquirePermissions(const TArray<FString>& permissions);  // parameters 0x18
    UFUNCTION(BlueprintCallable) static bool CheckPermission(FString permission);  // parameters 0x11
};
