// /Script/Icarus.IcarusGameViewportClient
// Derives from: UGameViewportClient > UScriptViewportClient > UObject
// size 0x370, declared in Icarus/Source/Icarus/Systems/IcarusGameViewportClient.h

UCLASS(Transient, Config=Engine)
class UIcarusGameViewportClient : public UGameViewportClient
{
private:
    uint32 : 1 bFading;  // 0x0360, not reflected
    uint32 : 1 bToBlack;  // 0x0360, not reflected
    float FadeAlpha;  // 0x0364, not reflected
    float FadeStartTime;  // 0x0368, not reflected
    float FadeDuration;  // 0x036C, not reflected

    // Virtual functions that start here:
    //   ClearFade, Fade
};
