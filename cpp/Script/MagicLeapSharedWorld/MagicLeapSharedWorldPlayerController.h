// /Script/MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController
// Derives from: APlayerController > AController > AActor > UObject
// size 0x5A8, declared in Engine/Plugins/Lumin/MagicLeapPassableWorld/Source/MagicLeapSharedWorld/Public/MagicLeapSharedWorldPlayerController.h

UCLASS(NotPlaceable, Config=Game)
class AMagicLeapSharedWorldPlayerController : public APlayerController
{
private:
    bool bHasNewLocalWorldData;  // 0x0590, not reflected
    bool bIsChosenOne;  // 0x0591, not reflected
    bool bCanSendLocalData;  // 0x0592, not reflected
    FMagicLeapSharedWorldLocalData LocalWorldData;  // 0x0598, not reflected
public:
    UFUNCTION(BlueprintCallable, BlueprintPure) bool CanSendLocalDataToServer() const;  // parameters 0x1
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void ClientMarkReadyForSendingLocalData();
    UFUNCTION(BlueprintCallable, Client, Reliable, BlueprintNativeEvent) void ClientSetChosenOne(bool bChosenOne);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsChosenOne() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, Server, Reliable, BlueprintNativeEvent) void ServerSetAlignmentTransforms(FMagicLeapSharedWorldAlignmentTransforms InAlignmentTransforms);  // parameters 0x10
    UFUNCTION(BlueprintCallable, Server, Reliable, BlueprintNativeEvent) void ServerSetLocalWorldData(FMagicLeapSharedWorldLocalData LocalWorldReplicationData);  // parameters 0x10

    // Virtual functions that start here:
    //   ClientMarkReadyForSendingLocalData_Implementation, ClientSetChosenOne_Implementation
    //   ServerSetAlignmentTransforms_Implementation, ServerSetLocalWorldData_Implementation
};
