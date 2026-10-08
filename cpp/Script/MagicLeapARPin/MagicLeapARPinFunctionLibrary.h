// /Script/MagicLeapARPin.MagicLeapARPinFunctionLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Engine/Plugins/Lumin/MagicLeapPassableWorld/Source/MagicLeapARPin/Public/MagicLeapARPinFunctionLibrary.h

UCLASS()
class UMagicLeapARPinFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

    UFUNCTION(BlueprintCallable, BlueprintPure) static FString ARPinIdToString(const FGuid& ARPinId);  // parameters 0x20
    UFUNCTION(BlueprintCallable) static void BindToOnMagicLeapARPinUpdatedDelegate(const FMagicLeapARPinUpdatedDelegate& Delegate);  // parameters 0x10
    UFUNCTION(BlueprintCallable) static void BindToOnMagicLeapContentBindingFoundDelegate(const FMagicLeapContentBindingFoundDelegate& Delegate);  // parameters 0x10
    UFUNCTION(BlueprintCallable) static EMagicLeapPassableWorldError CreateTracker();  // parameters 0x1
    UFUNCTION(BlueprintCallable) static EMagicLeapPassableWorldError DestroyTracker();  // parameters 0x1
    UFUNCTION(BlueprintCallable) static bool GetARPinPositionAndOrientation(const FGuid& PinID, FVector& Position, FRotator& Orientation, bool& PinFoundInEnvironment);  // parameters 0x2A
    UFUNCTION(BlueprintCallable) static bool GetARPinPositionAndOrientation_TrackingSpace(const FGuid& PinID, FVector& Position, FRotator& Orientation, bool& PinFoundInEnvironment);  // parameters 0x2A
    UFUNCTION(BlueprintCallable) static EMagicLeapPassableWorldError GetARPinState(const FGuid& PinID, FMagicLeapARPinState& State);  // parameters 0x25
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString GetARPinStateToString(const FMagicLeapARPinState& State);  // parameters 0x28
    UFUNCTION(BlueprintCallable) static EMagicLeapPassableWorldError GetAvailableARPins(int32 NumRequested, TArray<FGuid>& Pins);  // parameters 0x19
    UFUNCTION(BlueprintCallable) static EMagicLeapPassableWorldError GetClosestARPin(const FVector& SearchPoint, FGuid& PinID);  // parameters 0x1D
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 GetContentBindingSaveGameUserIndex();  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) static EMagicLeapPassableWorldError GetGlobalQueryFilter(FMagicLeapARPinQuery& CurrentGlobalFilter);  // parameters 0x69
    UFUNCTION(BlueprintCallable) static EMagicLeapPassableWorldError GetNumAvailableARPins(int32& Count);  // parameters 0x5
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool IsTrackerValid();  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool ParseStringToARPinId(FString PinIdString, FGuid& ARPinId);  // parameters 0x21
    UFUNCTION(BlueprintCallable) static EMagicLeapPassableWorldError QueryARPins(const FMagicLeapARPinQuery& Query, TArray<FGuid>& Pins);  // parameters 0x79
    UFUNCTION(BlueprintCallable) static void SetContentBindingSaveGameUserIndex(int32 UserIndex);  // parameters 0x4
    UFUNCTION(BlueprintCallable) static EMagicLeapPassableWorldError SetGlobalQueryFilter(const FMagicLeapARPinQuery& InGlobalFilter);  // parameters 0x69
    UFUNCTION(BlueprintCallable) static void UnBindToOnMagicLeapARPinUpdatedDelegate(const FMagicLeapARPinUpdatedDelegate& Delegate);  // parameters 0x10
    UFUNCTION(BlueprintCallable) static void UnBindToOnMagicLeapContentBindingFoundDelegate(const FMagicLeapContentBindingFoundDelegate& Delegate);  // parameters 0x10
};
