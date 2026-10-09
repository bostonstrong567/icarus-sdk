// /Script/Engine.PreviewAttachedObjectPair
// size 0x38, declared in Engine/Source/Runtime/Engine/Classes/Animation/PreviewAssetAttachComponent.h

USTRUCT()
struct FPreviewAttachedObjectPair
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY() FName AttachedTo;  // 0x0030, size 0x8
private:
    UPROPERTY() TSoftObjectPtr<UObject> AttachedObject;  // 0x0000, size 0x28
    UPROPERTY(Deprecated) UObject* Object;  // 0x0028, size 0x8
};
