// /Script/MovieScene.MovieSceneFolder
// Derives from: UObject
// size 0x70, declared in Engine/Source/Runtime/MovieScene/Public/MovieSceneFolder.h

UCLASS()
class UMovieSceneFolder : public UObject
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY() FName FolderName;  // 0x0028, size 0x8
    UPROPERTY() TArray<UMovieSceneFolder*> ChildFolders;  // 0x0030, size 0x10
    UPROPERTY() TArray<UMovieSceneTrack*> ChildMasterTracks;  // 0x0040, size 0x10
    UPROPERTY() TArray<FString> ChildObjectBindingStrings;  // 0x0050, size 0x10
    TArray<FGuid,TSizedDefaultAllocator<32> > ChildObjectBindings;  // 0x0060, not reflected
};
