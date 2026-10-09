// /Script/Engine.PreviewAssetAttachContainer
// size 0x10, declared in Engine/Source/Runtime/Engine/Classes/Animation/PreviewAssetAttachComponent.h

USTRUCT()
struct FPreviewAssetAttachContainer
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY() TArray<FPreviewAttachedObjectPair> AttachedObjects;  // 0x0000, size 0x10
};
