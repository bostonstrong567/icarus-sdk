// /Script/MagicLeapARPin.MagicLeapARPinSaveGame
// Derives from: USaveGame > UObject
// size 0xB0, declared in Engine/Plugins/Lumin/MagicLeapPassableWorld/Source/MagicLeapARPin/Public/MagicLeapARPinTypes.h

UCLASS()
class UMagicLeapARPinSaveGame : public USaveGame
{
public:
    UPROPERTY(EditAnywhere) FGuid PinnedID;  // 0x0028, size 0x10
    UPROPERTY(EditAnywhere) FTransform ComponentWorldTransform;  // 0x0040, size 0x30
    UPROPERTY(EditAnywhere) FTransform PinTransform;  // 0x0070, size 0x30
    UPROPERTY(EditAnywhere) bool bShouldPinActor;  // 0x00A0, size 0x1
};
