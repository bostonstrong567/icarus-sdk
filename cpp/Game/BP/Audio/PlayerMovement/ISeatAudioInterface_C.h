// /Game/BP/Audio/PlayerMovement/ISeatAudioInterface.ISeatAudioInterface_C
// Derives from: UInterface > UObject
// size 0x28, a blueprint class, blueprint

UCLASS(Config=Engine)
class UISeatAudioInterface_C : public UInterface
{
public:
    UFUNCTION(BlueprintCallable) void GetAudioSeatType(TEnumAsByte<EAudioSeatType>& Type);  // parameters 0x1
};
