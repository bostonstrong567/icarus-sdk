// /Script/Icarus.IcarusGameViewportClient
// Derives from: UGameViewportClient > UScriptViewportClient > UObject
// size 0x370, declared in Icarus/Source/Icarus/Systems/IcarusGameViewportClient.h

UCLASS(Transient, Config=Engine)
class UIcarusGameViewportClient : public UGameViewportClient
{
public:

    // Not reflected: the engine's scripting cannot see these.
    uint32 : 1 bFading;  // 0x0360, private
    uint32 : 1 bToBlack;  // 0x0360, private
    float FadeAlpha;  // 0x0364, private
    float FadeStartTime;  // 0x0368, private
    float FadeDuration;  // 0x036C, private

    // Virtual functions that start here:
    //   ClearFade, Fade
};
