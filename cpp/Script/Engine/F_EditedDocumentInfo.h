// /Script/Engine.EditedDocumentInfo
// size 0x30, declared in Engine/Source/Runtime/Engine/Classes/Engine/Blueprint.h

USTRUCT()
struct FEditedDocumentInfo
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY() FSoftObjectPath EditedObjectPath;  // 0x0000, size 0x18
    UPROPERTY() FVector2D SavedViewOffset;  // 0x0018, size 0x8
    UPROPERTY() float SavedZoomAmount;  // 0x0020, size 0x4
private:
    UPROPERTY(Deprecated) UObject* EditedObject;  // 0x0028, size 0x8
};
