// /Script/MagicLeapSharedWorld.MagicLeapSharedWorldGameMode
// Derives from: AGameMode > AGameModeBase > AInfo > AActor > UObject
// size 0x3D8, declared in Engine/Plugins/Lumin/MagicLeapPassableWorld/Source/MagicLeapSharedWorld/Public/MagicLeapSharedWorldGameMode.h

UCLASS(Transient, NotPlaceable, Config=Game)
class AMagicLeapSharedWorldGameMode : public AGameMode
{
public:
    UPROPERTY(BlueprintReadWrite) FMagicLeapSharedWorldSharedData SharedWorldData;  // 0x0308, size 0x10
    UPROPERTY(BlueprintAssignable) FMagicLeapOnNewLocalDataFromClients OnNewLocalDataFromClients;  // 0x0318, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float PinSelectionConfidenceThreshold;  // 0x0328, size 0x4
    UPROPERTY(BlueprintReadWrite) AMagicLeapSharedWorldPlayerController* ChosenOne;  // 0x03D0, size 0x8

    // Not reflected: the engine's scripting cannot see these.
    TMap<AMagicLeapSharedWorldPlayerController *,TArray<FGuid,TSizedDefaultAllocator<32> >,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<AMagicLeapSharedWorldPlayerController *,TArray<FGuid,TSizedDefaultAllocator<32> >,0> > PlayerToLocalPins;  // 0x0330, protected
    TMap<FGuid,TMap<AMagicLeapSharedWorldPlayerController *,FMagicLeapARPinState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<AMagicLeapSharedWorldPlayerController *,FMagicLeapARPinState,0> >,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TMap<AMagicLeapSharedWorldPlayerController *,FMagicLeapARPinState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<AMagicLeapSharedWorldPlayerController *,FMagicLeapARPinState,0> >,0> > PinToOwnersToStates;  // 0x0380, protected

    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, BlueprintNativeEvent) void DetermineSharedWorldData(FMagicLeapSharedWorldSharedData& NewSharedWorldData);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, BlueprintNativeEvent) void SelectChosenOne();
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) bool SendSharedWorldDataToClients();  // parameters 0x1

    // Virtual functions that start here:
    //   DetermineSharedWorldData_Implementation, SelectChosenOne_Implementation
};
