// /Script/MagicLeapARPin.MagicLeapARPinContentBindings
// Derives from: USaveGame > UObject
// size 0x78, declared in Engine/Plugins/Lumin/MagicLeapPassableWorld/Source/MagicLeapARPin/Public/MagicLeapARPinTypes.h

UCLASS()
class UMagicLeapARPinContentBindings : public USaveGame
{
public:
    UPROPERTY(EditAnywhere) TMap<FGuid, FMagicLeapARPinObjectIdList> AllContentBindings;  // 0x0028, size 0x50
};
