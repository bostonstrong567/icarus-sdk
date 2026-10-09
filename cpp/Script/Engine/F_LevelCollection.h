// /Script/Engine.LevelCollection
// size 0x78, declared in Engine/Source/Runtime/Engine/Classes/Engine/World.h

USTRUCT()
struct FLevelCollection
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    ELevelCollectionType CollectionType;  // 0x0000, not reflected
    bool bIsVisible;  // 0x0001, not reflected
    UPROPERTY() AGameStateBase* GameState;  // 0x0008, size 0x8
    UPROPERTY() UNetDriver* NetDriver;  // 0x0010, size 0x8
    UPROPERTY() UDemoNetDriver* DemoNetDriver;  // 0x0018, size 0x8
    UPROPERTY() ULevel* PersistentLevel;  // 0x0020, size 0x8
    UPROPERTY() TSet<ULevel*> Levels;  // 0x0028, size 0x50
};
