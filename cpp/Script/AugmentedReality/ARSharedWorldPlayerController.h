// /Script/AugmentedReality.ARSharedWorldPlayerController
// Derives from: APlayerController > AController > AActor > UObject
// size 0x598, declared in Engine/Source/Runtime/AugmentedReality/Public/ARSharedWorldPlayerController.h

UCLASS(NotPlaceable, Config=Game)
class AARSharedWorldPlayerController : public APlayerController
{
private:
    bool bIsReadyToReceive;  // 0x0590, not reflected
public:
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void ClientInitSharedWorld(int32 PreviewImageSize, int32 ARWorldDataSize);  // parameters 0x8
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void ClientUpdateARWorldData(int32 Offset, TArray<uint8> Buffer);  // parameters 0x18
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void ClientUpdatePreviewImageData(int32 Offset, TArray<uint8> Buffer);  // parameters 0x18
    UFUNCTION(Server, Reliable, BlueprintNativeEvent) void ServerMarkReadyForReceiving();

    // Virtual functions that start here:
    //   ClientInitSharedWorld_Implementation, ClientInitSharedWorld_Validate
    //   ClientUpdateARWorldData_Implementation, ClientUpdateARWorldData_Validate
    //   ClientUpdatePreviewImageData_Implementation, ClientUpdatePreviewImageData_Validate
    //   ServerMarkReadyForReceiving_Implementation, ServerMarkReadyForReceiving_Validate
};
