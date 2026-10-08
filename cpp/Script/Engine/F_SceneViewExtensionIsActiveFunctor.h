// /Script/Engine.SceneViewExtensionIsActiveFunctor
// size 0x50, declared in Engine/Source/Runtime/Engine/Public/SceneViewExtensionContext.h

USTRUCT()
struct FSceneViewExtensionIsActiveFunctor
{

    // Not reflected:
    FGuid Guid;  // 0x0000
    TFunction<TOptional<bool> __cdecl(ISceneViewExtension const *,FSceneViewExtensionContext const &)> IsActiveFunction;  // 0x0010
};
